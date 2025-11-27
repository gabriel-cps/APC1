#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

#define LARGURA 20
#define ALTURA 10
#define MAX_PLAYERS 5

struct Player {
    char nome[30];
    int pontuacao;
};

int main()
{
    // --- VARIÁVEIS PARA O CONTROLE DO CURSOR ---
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Pega o controle da janela uma vez só
    COORD posicaoCursor; // Estrutura que guarda X e Y

    struct Player listaJogadores[MAX_PLAYERS]; // Array de jogadores
    struct Player tempPlayer; // Variável auxiliar para o Ranking
    int opcao = 0;
    int p = 0; // Quantidade atual de jogadores registrados

    while (opcao !=3)
    {
        system("cls");
        printf("-----------------------------\n");
        printf("          S N A K E          \n");
        printf("-----------------------------\n");
        printf("       1  - Novo Jogo        \n");
        printf("       2  - Ver Ranking      \n");
        printf("       3  - Sair             \n");
        printf("-----------------------------\n");
        printf("Escolha uma opcao =>         \n");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao)
        {
            case 1: {
                // Verifica se o leaderboard está cheio
                if (p >= MAX_PLAYERS) {
                    printf("\nLeaderboard cheio! Reinicie o programa ou aumente o limite.\n");
                    system("pause");
                    break;
                }

                system("cls");
                printf("Entre com seu nome: ");
                fgets(listaJogadores[p].nome, sizeof(listaJogadores[p].nome), stdin);
                listaJogadores[p].nome[strcspn(listaJogadores[p].nome, "\n")] = 0;
                printf("Ola jogador %s!\n", listaJogadores[p].nome);
                printf("Os comandos do jogo sao W, A, S, D para movimentar e Q para sair\n");
                printf("Pressione ENTER para comecar\n");
                getchar();

                // Entra com o codigo do jogo
                int i, j, k;
                int x, y, frutaX, frutaY;
                int caudaX[100], caudaY[100];
                int nCauda = 0; 
                int score = 0;
                int gameover = 0;
                int dir = 0; 

                // Configuração inicial
                srand(time(0));
                x = LARGURA / 2;
                y = ALTURA / 2;
                frutaX = rand() % LARGURA;
                frutaY = rand() % ALTURA;

                // Esconde o cursor antes de começar o jogo
                HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
                CONSOLE_CURSOR_INFO info;
                info.dwSize = 100;
                info.bVisible = FALSE; // Define visibilidade como Falso
                SetConsoleCursorInfo(consoleHandle, &info);
                    
                system("cls"); 

                while(!gameover) {
                    posicaoCursor.X = 0; // Define coordenada X como 0
                    posicaoCursor.Y = 0; // Define coordenada Y como 0
                    SetConsoleCursorPosition(hConsole, posicaoCursor); // Move o cursor

                    printf("Pontos: %d  | Jogador: %s\n", score, listaJogadores[p].nome);
                        
                    for(i=0; i<LARGURA+2; i++) printf("#");
                    printf("\n");

                    for (i = 0; i < ALTURA; i++) {
                        printf("#");
                        for (j = 0; j < LARGURA; j++) {
                            if (i == y && j == x)
                                printf("O"); 
                            else if (i == frutaY && j == frutaX)
                                    printf("x"); 
                            else {
                                int printouCauda = 0;
                                for (k = 0; k < nCauda; k++) {
                                    if (caudaX[k] == j && caudaY[k] == i) {
                                        printf("o");
                                        printouCauda = 1;
                                    }
                                }
                                if (!printouCauda) printf(" ");
                            }
                        }
                        printf("#\n");
                        }
                        
                    for(i=0; i<LARGURA+2; i++) printf("#");

                    // --- 2. INPUT ---
                    if (_kbhit()) {
                        char tecla = tolower(_getch());
                        switch(tecla) {
                            case 'a': if(dir != 2) dir = 1; break;
                            case 'd': if(dir != 1) dir = 2; break;
                            case 'w': if(dir != 4) dir = 3; break;
                            case 's': if(dir != 3) dir = 4; break;
                            case 'q': gameover = 1; break;
                        }
                    }

                    // --- 3. LÓGICA DA CAUDA ---
                    int prevX = caudaX[0];
                    int prevY = caudaY[0];
                    int prev2X, prev2Y;
                        
                    caudaX[0] = x;
                    caudaY[0] = y;

                    for (i = 1; i < nCauda; i++) {
                        prev2X = caudaX[i];
                        prev2Y = caudaY[i];
                        caudaX[i] = prevX;
                        caudaY[i] = prevY;
                        prevX = prev2X;
                        prevY = prev2Y;
                    }

                    // --- 4. MOVIMENTO ---
                    switch (dir) {
                        case 1: x--; break;
                        case 2: x++; break;
                        case 3: y--; break;
                        case 4: y++; break;
                    }

                    // --- 5. COLISÕES ---
                    if (x >= LARGURA) x = 0; else if (x < 0) x = LARGURA - 1;
                    if (y >= ALTURA)  y = 0; else if (y < 0) y = ALTURA - 1;

                    for (k = 0; k < nCauda; k++) {
                        if (caudaX[k] == x && caudaY[k] == y) {
                            gameover = 1;
                        }
                    }

                    if (x == frutaX && y == frutaY) {
                        score += 10;
                        nCauda++;
                        frutaX = rand() % LARGURA;
                        frutaY = rand() % ALTURA;
                    }

                    Sleep(100);
                }

                printf("\nGAME OVER! Pontuacao Final: %d\n", score);
                // Salva a pontuação no struct do jogador atual
                listaJogadores[p].pontuacao = score;
            
                // Incrementa o número de jogadores registrados
                p++;

                system("pause");
            } break;

            p = p++;
            
            case 2:{
                system("cls");
                if (p == 0) {
                    printf("Nenhum jogo registrado ainda!\n");
                } else {
                    // Ordena do maior para o menor
                    for (int i = 0; i < p - 1; i++) {
                        for (int j = 0; j < p - i - 1; j++) {
                            if (listaJogadores[j].pontuacao < listaJogadores[j + 1].pontuacao) {
                                // Troca de lugar
                                tempPlayer = listaJogadores[j];
                                listaJogadores[j] = listaJogadores[j + 1];
                                listaJogadores[j + 1] = tempPlayer;
                            }
                        }
                    }
                    printf("-----------------------------\n");
                    printf("-------- LEADERBOARD --------\n");
                    printf("-----------------------------\n");
                    printf("Rank  Nome              Score\n");
                    printf("-----------------------------\n");
                    
                    for(int i = 0; i < p; i++){
                        printf("#%d    %-17s %d\n", i+1, listaJogadores[i].nome, listaJogadores[i].pontuacao);
                    }
                    printf("-----------------------------\n");
                }
                printf("\n\nPressione ENTER para voltar...");
                getchar();
            } break;

            case 3: system("cls"); printf("Ate logo!\n"); getchar(); break;

            default: printf("Opcao invalida! Pressione ENTER...");
                     getchar();
        }
    }

    return 0;
}
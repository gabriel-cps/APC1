#include <stdio.h>
#include <stdlib.h>
int main()
{
    int opcao = 0;

    while (opcao !=3)
    {
        system("clear");
        printf("-----------------------------\n");
        printf("      M E U     J O G O      \n");
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
            case 1:{
                system("clear");
                char nome[30];
                printf("Entre com seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                printf("Ola jogador %s! \n", nome);
                printf("Pressione ENTER para comecar\n");
                getchar();
                //....
            break;
            }
            case 2:{


            break;
            }
            case 3: printf("Ate logo!\n"); break;
            default: printf("Opcao invalida! Pressione ENTER...");
                     getchar();
        }
    }

    return 0;
}
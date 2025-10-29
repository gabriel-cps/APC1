#include <stdio.h>

int main()
{

    // Boletim de Notas
    // Disciplina   A1   A2
    // 7 x 2

    float notas[7][2];

    notas[0][0] = 0.0f;
    notas[0][1] = 0.0f;
    notas[1][0] = 0.0f;
    notas[1][1] = 0.0f;
    notas[2][0] = 0.0f;
    notas[2][1] = 0.0f;
    notas[3][0] = 0.0f;
    notas[3][1] = 0.0f;
    notas[4][0] = 0.0f;
    notas[4][1] = 0.0f;
    notas[5][0] = 0.0f;
    notas[5][1] = 0.0f;
    notas[6][0] = 0.0f;
    notas[6][1] = 0.0f;

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 2; j++){
            printf("Entre com a %ia nota da %ia disciplina: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    
    printf("Seu boletim\n");
    for (int i = 0; i < 7; i++){
        printf("%ia Disciplina", i + 1);
        for(int j = 0; j < 2; j++){
            printf("%5.1f", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
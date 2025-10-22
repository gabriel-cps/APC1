#include <stdio.h>

int main()
{
    int ladoA;
    int ladoB;

    printf("Entre o tamanho do lado A: ");
    scanf("%i", &ladoA);

    printf("Entre o tamanho do lado B: ");
    scanf("%i", &ladoB);

    for (int i = 1; i <= ladoA; i++)
    {
        for (int j = 1; j <= ladoB; j++)
        {
            if (i == 1 || i == ladoA) {
               printf("-");
            } else if (j == 1 || j == ladoB) {
               printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // for (int j = 1; j <= ladoB; j++) {
    //     printf("-");
    // }
    // printf("\n");

    // for (int j = 1; j <= ladoB; j++) {
    //     printf("-");
    // }
    // printf("\n");

    return 0;
}
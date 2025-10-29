#include <stdio.h>

int main()
{
    int numeros[10]; // uma dimensao = vetor

    for (int i = 0; i < 10; i++)
    {
        printf("Entre com o %io numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Os valores lidos foram: ");
    for (int i = 0; i < 10; i++)
    {
        if(i < 9)
        {
            printf("%i, ", numeros[i]);
        } else {
            printf("e %i. ", numeros[i]);
        }
    }

    printf("\n");

    return 0;
}
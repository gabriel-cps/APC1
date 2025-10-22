#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);

    while(numero < 1 || numero > 10)
    {
        while (getchar() != '\n'); // limpar o buffer
        printf("O numero nao esta entre 1 e 10\n");
        printf("Tente novamente...");
        scanf("%i", &numero);
    }

    do 
    {
        printf("O numero nao esta entre 1 e 10\n");
        printf("Tente novamente...");
        scanf("%i", &numero);
    } while (numero < 1 || numero > 10);

    return 0;
}
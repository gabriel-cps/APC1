#include <stdio.h>

int main()
{
    int numero;
    int maior;
    int menor;
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero!= 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
        scanf("%d", &numero);
        printf("%d %d ", maior, menor);
    }

    

    return 0;
}
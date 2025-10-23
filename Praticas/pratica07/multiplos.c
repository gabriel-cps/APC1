#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero");
    scanf("%d", &numero);

    for(int i=1; i<101; i++)
    {
        if (i % numero == 0)
        {
            printf("%i, ", i);
        }
    }
    return 0;
}
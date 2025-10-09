#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano\n");
    scanf("%d", &ano);
    getchar();

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("O ano %d eh bissexto\n", ano);
    }
    else
    {
        printf("O ano %d nao eh bissexto", ano);
    }
    return 0;
}
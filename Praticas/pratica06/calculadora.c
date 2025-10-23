#include <stdio.h>

int main()
{
    int operacao;
    float numero1;
    float numero2;
    printf("Digite qual operacao deseja:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &operacao);
    getchar();
    printf("Digite os dois numeros para o calculo\n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);

    switch(operacao)
    {
        case 1:
        {
            printf("%f", numero1+numero2);
            break;
        }
        case 2:
        {
            printf("%f", numero1-numero2);
            break;
        }
        case 3:
        {
            printf("%f", numero1*numero2);
            break;
        }
        case 4:
        {
            printf("%f", numero1/numero2);
            break;
        }
        default: printf("ERROR - opcao invalida"); 
    }

    return 0;
}
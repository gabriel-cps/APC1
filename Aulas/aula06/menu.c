#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    printf("--------------------\n");
    printf("   MENU PRINCIPAL   \n");
    printf("1 - Consulta saldo\n");
    printf("2 - Recarregar saldo\n");
    printf("3 - Ouvir recados\n");
    printf("4 - Ver ultimas chamadas\n");
    printf("5 - Sair\n");
    printf("--------------------\n");

    int opcao;
    char opt;
    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);

  
    switch(opcao)
    {
        case 1: printf("Seu saldo eh de: X reais\n"); break;
        case 2: printf("Escolha um valor de recarga:\n"); break;
        case 3: printf("Voce não tem recados\n"); break;
        case 4: printf("Ultima ligacao 99999-9999\n"); break;
        case 5: printf("Obrigado pelo contato\n"); break;
        default: printf("Opcao invalida. Tente novamente");
    }

    return 0;      
}
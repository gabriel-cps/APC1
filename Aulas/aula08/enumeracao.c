#include <stdio.h>
#include <stdbool.h>

int main(){

    //    const int false = 0;
    //    const int true = 1;
    bool situacao = false;
    
    const int domingo = 1;
    const int segunda = 2;
    const int terca =   3;
    const int quarta =  4;
    const int quinta =  5;
    const int sexta =   6;
    const int sabado =  7;

    enum dia_da_semana_e {
        dom=1, seg, ter, qua, qui, sex, sab
    }

    int dia;
    printf("Entre com um dia da semana entre 1 e 7: ");
    scanf("%i", &dia);

    switch (dia)
    {
    case dom:
        printf("Domingo\n");
        break;
    case seg:
        printf("Segunda\n");
        break;
    case ter:
        printf("Terca\n");
        break;
    case qua:
        printf("Quarta\n");
        break;
    case qui:
        printf("Quinta\n");
        break;
    case sex:
        printf("Sexta\n");
        break;
    case sab:
        printf("Sabado\n");
        break;
    default: printf("Dia invalido");
        break;
    }


    return 0;
}
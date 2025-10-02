#include <stdio.h>

int main()
{
    int numero;
    
    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero);
    if(numero % 2 == 0){
        printf("Numero par");
    }
    
    if(numero % 2 != 0){
        printf("Numero impar");
    }


    return 0;
}
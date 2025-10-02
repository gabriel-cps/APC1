#include <stdio.h>

int main()
{
    int idade;
    printf("Digite sua idade");
    scanf("%d", &idade);

    if(idade < 18){
        if(idade < 16){
            printf("Voce nao pode votar\n");
        }else {
            printf("Voce pode votar\n");
        }
    } else {
        if(idade < 70){
            printf("Voce deve votar!\n");
        } else {
            printf("Voce pode votar!\n");
        }
    }
    

    return 0;
}
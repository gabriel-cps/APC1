#include <stdio.h>
 
 int main()
 {
    int nota;
    printf("Digite uma nota: \n");
    scanf("%d", &nota);

    do {
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);

    } while(nota < 1 || nota > 10);


    return 0;
 }
#include <stdio.h>
#include <locale.h>  // biblioteca de idiomas

int main()
{
    setlocale(LC_ALL, "");
    printf("Olá Pessoal!\n");
    printf("Em que posso ajudar?\n");
    printf("Gere minha NOTA LEGAL\n");
    printf("=========================\n");
    printf("||   N O T A   L E G A L   ||\n");
    printf("=========================\n");
    printf("Caderno     001     50,00\n");
    printf("Lápis       002      7,50\n");
    printf("Borracha    001     12,00\n");
    printf("=========================\n");
    printf("Total.........:     69,50\n");


    printf("%-11s %03i   %7.2f\n", "Caneta", 3, 11.75);

    return 0;
}
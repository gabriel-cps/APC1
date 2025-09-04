#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char produto[30];
    int quantidade;
    float preco;

    printf("Informe o nome do produto: ");
    scanf("%s", produto); //%s não precisa de &
    getchar();

    printf("Informe a quatidade do produto: ");
    scanf("%i", &quantidade);
    getchar();

    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    printf("\nGerando a nota legal....\n");

    printf("====================\n");
    printf(" N O T A  L E G A L\n");
    printf("====================\n");
    printf("Item       Qtd Preço\n");
    printf("%-10s %03i %5.2f\n", produto, quantidade, preco);
    printf("====================\n");


    return 0;
}
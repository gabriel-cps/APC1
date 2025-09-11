#include <stdio.h>

int main()
{
    int isbn = 000000000000;
    int pag = 000;
    float preco = 0000.00f;
    int ano_p = 0000;


    printf("ISBN: %012i\n", isbn);
    printf("Num. Paginas: %03i\n", pag);
    printf("Preco: R$ %4.2f\n",preco);
    printf("Publicado em: %04i\n", ano_p);
    return 0;
}
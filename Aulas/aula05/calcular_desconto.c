#include <stdio.h>

int main()
{

    float valor_compra;

    printf("Entre com o valor da compra: ");
    scanf("%f", &valor_compra);

    /* até R$ 100,00 - ganha 1% de desconto
       R$ 100,01 até R$ 200,00 - ganha 2% de desconto
       R$ 200,01 até R$ 500,00 - ganha 5% de desconto
       acima de R$ 500,00 - ganha 10% de desconto
    */

   float desconto = 0.0f;

   if (valor_compra <= 100.0f)
   {
        desconto = valor_compra * 0.01f;
        
   } else if (valor_compra < 200)
   {
        desconto = valor_compra * 0.02f;
   } else if (valor_compra < 500)
   {
        desconto = valor_compra * 0.05f;
   } else
   {
        desconto = valor_compra * 0.1f;
   }

   printf("%.2f", desconto);

    return 0;
}   
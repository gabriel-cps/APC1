#include <stdio.h>
#include <math.h>
int main(void)
{
    float delta;
    float x;
    float a;
    float b;
    float c;
    float raiz1;
    float raiz2;

    printf("Digite o coeficiente A\n");
    scanf("%f", &a);
    getchar();
    printf("Digite o coeficiente B\n");
    scanf("%f", &b);
    getchar();
    printf("Digite o coeficiente C\n");
    scanf("%f", &c);

    delta = b * b - (4 * a * c);

    if(delta > 0)
    {
        printf("O delta eh igual a %.2f, portanto ", &delta);
        printf("temos duas raizes... calculando...\n");
        raiz1 = (- b + sqrt(delta)) / (2 * a);
        raiz2 = (- b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: %.2f %.2f", raiz1, raiz2);
    } else if (delta == 0){
        printf("O delta eh igual a %.2f, portanto ", &delta);
        printf("temos uma raiz... calculando...\n");
        raiz1 = (- b + sqrt(delta)) / (2 * a);
        raiz2 = (- b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: %.2f %.2f", raiz1, raiz2);
    } else if (delta < 0){
        printf("O delta eh igual a %.2f, portanto ", &delta);
        printf("nao tem raiz real");
    } else {
        printf("ERROR");
    }

    return 0;
}
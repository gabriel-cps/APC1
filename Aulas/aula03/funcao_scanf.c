#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "");
    char tecla;
    int idade;
    float nota;
    double percentual;

    printf("Informe os valores das variáveis:\n");
    scanf("%c", &tecla);
    getchar(); // le uma tecla - limpa \n anterior
    scanf("%i", &idade);
    getchar();
    scanf("%f", &nota);
    getchar();
    scanf("%f", &percentual);

    printf("Os valores das variáveis foram:\n");
    printf("tecla = %c\n", tecla);
    printf("idade = %i\n", idade);
    printf("nota = %.1f\n", nota);

    return 0; 
}
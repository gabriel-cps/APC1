#include <stdio.h>

int main(){
    // 1) tipos de dados
    // char   => 1 caracter
    // int    => numeros inteiros + e -
    // float  => flutuante com 6 casas
    // double => flutuante com 12 casas
    // void   => sem tipo

    // 2) declaração de variaveis
    char tecla;
    char opcao;
    int idade;
    float nota;
    double dizima_periodica;

    // 3) declaração de constantes
    const double PI = 3.141516;

    tecla = 'A';
    idade = 16;
    nota = 5.5f;
    dizima_periodica = 1.33333333333333333;

    printf("Os valores das variaveis:\n");
    printf("tecla = %c\n", tecla);
    printf("idade = %i\n", idade);
    printf("nota = %.1f\n", nota);
    printf("dizima = %.12f\n", dizima_periodica);

    return 0;
}
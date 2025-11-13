#include <stdio.h>
#include <string.h>

int main()
{
    char string[25] = "Eu gosto de programa em C";
    
    printf("A string eh %s\n", string);

    string[10] = '\0';

    printf("A string eh %s\n", string);

    for (int i = 0; i < 26; i++){
        printf("%c", string[i]);
    }

    printf("\n");

    // preencher uma string
    memset(string, 'A', 10);
    printf("A string eh %s\n", string);
    memset(string, '\0', sizeof(string)); //limpa a string

    // tamanho da string
    printf("A string em %i caractere(s)\n", strlen(string));

    // copiar uma string para outra string
    strcopy(string, "Uma string copiada");

    // concatenar strings
    strcat(string, " e concatenada");

    // comparar duas strings
    printf("As strings 'Jose' e 'jose' sao iguais? %i\n", strcmp("Jose", "jose"));
    printf("As strings 'jose' e 'Jose' sao iguais? %i\n", strcmp("jose", "Jose"));
    printf("As strings 'Jose' e 'Jose' sao iguais? %i\n", strcmp("Jose", "Jose"));

    // procurar um caracter na string
    printf("A string 'Jose' tem a letra 'o'%i\n", strchr("Jose", 'o'));
    printf("A string 'Jose' tem a letra 'a'%i\n", strchr("Jose", 'a'));

    // procurar uma string em outra string
    printf("A string 'Jose' tem a string 'ose'? %s\n", strstr("Jose", "ose"));
    printf("A string 'Jose' tem a string 'oao'? %s\n", strstr("Jose", "oao"));

    return 0;
}
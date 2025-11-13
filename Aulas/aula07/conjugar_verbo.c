#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char verbo[31];
    char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
    char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
    printf("Entre com o verbo terminado em AR: ");
    fgets(verbo, sizeof(verbo), stdin);
    verbo[strlen(verbo) - 1] = '\0';

    // converte para maiusculo
    for (int i = 0; i < strlen(verbo); i++){
        verbo[i] = toupper(verbo[i]);
    }

    int ultima_posicao = strlen(verbo) - 1;
    int penultima_posicao = ultima_posicao - 1;

    if(verbo[penultima_posicao] == 'A' && verbo[ultima_posicao] == 'R'){
        char radical[31];
        strcpy(radical, verbo);
        radical[penultima_posicao] = '\0';
        printf("O presente do indicativo do verbo %s\n", verbo);

        for (int i = 0; i < 6; i++)
        {
            printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
        }
        
    } else {
        printf("O verbo %s nao termina em AR!\n", verbo);
    }
    return 0;
}
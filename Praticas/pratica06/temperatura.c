#include <stdio.h>

int main(void)
{
    int temperatura;
    
    printf("Digite a temperatura:\n");
    scanf("%d", &temperatura);
    getchar();

    if (temperatura > 40)
    {
        printf("Muito quente");
    }else if (temperatura > 30){
        printf("Quente");    
    }else if (temperatura > 20){
        printf("Agradavel");
    }else{
        printf("Frio");
    }

    return 0;
}
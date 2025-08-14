#include <stdio.h>
int main(void){
    int a = 0;
    int b = 0;
    int l = 0;
    int c = 0;
    printf("Digite um numero:\n");
    scanf("%d", &a);
    if(a == 0){
        printf("Die monster :(");
    }
    else{
        printf("Seu numero eh: %d", a);
    }

    while (b<100){
        printf("\n%d\n",b);
        b = b + 1;
    }
    for(l=0;l<3;l++){
        printf("1\n");
        for(c=0;c<3;c++){
            printf("0");
        }
    }
    
    return 0;
}
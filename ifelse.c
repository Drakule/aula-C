#include <stdio.h>

int main()
{
    float m;

    printf("Insira a média: ");
    scanf("%f", &m);

    if(m >= 7){
        printf("Aprovado(a)!! \n");
    }
    else{
        printf("Reprovado!!:c \n");
    }
    return 0;
}
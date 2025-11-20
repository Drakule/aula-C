#include <stdio.h>

int main()
{
    int d;

    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &d);

    switch(d)
    {
        case 1:
            printf("Bom Domingo!!\n");
            break;
        case 2:
            printf("Boa Segunda-Feira!!\n");
            break;
        case 3:
            printf("Boa Terça-Feira!!\n");
            break;
        case 4:
            printf("Boa Quarta-Feira!!\n");
            break;
        case 5:
            printf("Boa Quinta-Feira!!\n");
            break;
        case 6:
            printf("Boa Sexta-Feira!!\n");
            break;
        case 7:
            printf("Bom Sábado!!\n");
            break;
        default:
            printf("Valor inválido!!\n");
            break;
    }
}
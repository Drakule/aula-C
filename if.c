#include <stdio.h>

int main()
{
    float m;

    printf("Insira uma nota: ");
    scanf("%f", &m);

    if (m >= 7.0)
    {
        printf("Aprovado(a)! \n");
    }
    return 0;
}
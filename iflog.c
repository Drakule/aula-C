#include <stdio.h>

int main()
{
    float m;

    printf("Insira a nota: ");
    scanf("%f", &m);

    if(m >= 4 && m < 7)
    {
        printf("Tem direito a novo exame!! \n");
    }
    return 0;
}
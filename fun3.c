#include <stdio.h>
#define N 50

float maior(float num1, float num2);

int main()
{
    float x, y ,m;
    char buffer[N];
    printf("Insira um valor: ");
    fgets(buffer, N, stdin);
    sscanf(buffer, "%f", &x);

    printf("Insira outro valor: ");
    fgets(buffer, N, stdin);
    sscanf(buffer, "%f", &y);

    m = maior(x, y);
    printf("Maior: %.2f\n", m);
}

float maior(float num1, float num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
    
}
#include <stdio.h>

int main ()
{
    int idade = 0;
    float saldo = 0.0;

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira o saldo da sua conta: ");
    scanf("%f", &saldo);

    printf("Idade informada: %d \n", idade);
    printf("Saldo: %.2f \n", saldo);
}
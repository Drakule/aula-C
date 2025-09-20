#include <stdio.h>

int main()
{
    int A, B, soma, subtr, mult, div;

    printf("Insira o primeiro valor: ");
    scanf("%d", &A);

    printf("Insira o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    div = A / B;

    printf("-Resultados- \n");
    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtr);
    printf("Multiplicação: %d \n", mult);
    printf("Divisão: %d \n", div);
}
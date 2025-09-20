#include <stdio.h>

#define texto "Entrada e saída de dados."

int main ()
{
    printf("%s \n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Seu nome é %s, você tem %d anos e mede %.2f de altura. \n", nome, idade, altura);



}
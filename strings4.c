#include <stdio.h>
#include <string.h>

#define N 50

int main ()
{
    char s[N];
    int i;

    printf("Digite um texto: ");
    fgets(s, sizeof(s), stdin);
    i = strlen(s);

    printf("\nTamanho do Texto: %d\n\n", i);

    printf("Impressão de posição a posição: \n");
    puts(s);
}
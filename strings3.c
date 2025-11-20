#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char s1[N] = {"Lógica de "};
    char s2 [N] = {"Programação"};

    printf("Antes de strcat: ");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1, s2);

    printf("Depois do strcat: \n");
    puts(s1);
}
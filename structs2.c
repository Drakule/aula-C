#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 3
#define N 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[N];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    tipo_pessoa lista[TAM];
    int i;
    char buffer[N];

    for(i = 0; i < TAM; i++)
    {
        printf("Insira os (%d) dados: \n", i+1);
        printf("Nome: ");
        fgets(buffer, N, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        strcpy(lista[i].nome, buffer);

        printf("Idade: ");
        fgets(buffer, N, stdin);
        sscanf(buffer, "%d", &lista[i].idade);

        printf("Peso: ");
        fgets(buffer, N, stdin);
        sscanf(buffer, "%f", &lista[i].peso);
    }
    system("clear");

    for(i = 0; i < TAM; i++)
    {
        printf("-----------------PACIENTE %d-----------------\n", i+1);
        printf("\tNome: %s \n", lista[i].nome);
        printf("\tIdade: %d \n", lista[i].idade);
        printf("\tPeso: %.2f \n", lista[i].peso);
    }

    return 0;
}
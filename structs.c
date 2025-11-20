#include <stdio.h>
#include <string.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main ()
{
    tipo_pessoa pes = {0, 0.0, "Teste"};
    char buffer[TAM];

    printf("Início: \n");
    printf("pes.idade: %d \n", pes.idade);
    printf("pes.peso: %.2f \n", pes.peso);
    printf("pes.nome: %s \n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");
    
    printf("\nAlterando os campos via código: \n");
    printf("pes.idade: %d \n", pes.idade);
    printf("pes.peso: %.2f \n", pes.peso);
    printf("pes.nome: %s \n", pes.nome);

    printf("Insira um número inteiro: ");
    fgets(buffer, TAM, stdin);
    sscanf(buffer, "%d", &pes.idade);
    
    printf("Insira um valor real: ");
    fgets(buffer, TAM, stdin);
    sscanf(buffer, "%f", &pes.peso);
    
    printf("Insira uma palavra: ");
    fgets(pes.nome, TAM, stdin);

    pes.nome[strcspn(pes.nome, "\n")] = '\0';

    printf("Alterando com dados do usuário: \n");
    printf("Idade: %d \n", pes.idade);
    printf("Peso: %.2f \n", pes.peso);
    printf("Nome: %s \n", pes.nome);

    return 0;
}
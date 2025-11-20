#include <stdio.h>
#include <string.h>

#define N 50

int main ()
{
    char hardtxt[N] = {"/exit"};
    char senha_usr[N];
    int i;

    printf("Digite a senha: ");
    fgets(senha_usr, N, stdin);

    for(i = 0; senha_usr[i] != '\0'; i++) 
    {
        if(senha_usr[i] == '\n') 
        {
            senha_usr[i] = '\0';
            break;
        }
    }


    if(strcmp(hardtxt, senha_usr) == 0)
        printf("Senha correta! \n");
    else
        printf("Senha incorreta. \n");

}
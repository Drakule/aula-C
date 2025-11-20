#include <stdio.h>

int main() 
{
    // Três "copos" com números
    int copo1 = 10;
    int copo2 = 20; 
    int copo3 = 30;
    
    // Ponteiro é como uma "VARA" que aponta para um copo
    int *vara = &copo1;  // Vara aponta para copo1
    
    printf("Vara aponta para: %d\n", *vara);  // 10
    
    // Movendo a vara para outro copo
    vara = &copo2;
    printf("Vara aponta para: %d\n", *vara);  // 20
    
    vara = &copo3;
    printf("Vara aponta para: %d\n", *vara);  // 30
    
    // Mudando o número DENTRO do copo através da vara
    *vara = 99;
    printf("Agora copo3 tem: %d\n", copo3);   // 99
    
    return 0;
}
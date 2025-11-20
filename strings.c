#include <stdio.h>

int main() {
    char s[10];
    int i;

    printf("Digite algo: ");
    fgets(s, 10, stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    puts("Resultado: "); 
    puts(s);

    return 0;
}
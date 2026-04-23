#include <stdio.h>

int main() {

    char c;  // cararacter

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    printf("Caractere digitado: %c\n", c);
    printf("Codigo ASCII: %d\n", c);

    return 0;
}
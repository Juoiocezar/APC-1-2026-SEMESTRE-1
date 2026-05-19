#include <stdio.h>

int main() {

    int numero = 5;
    int fatorial = 1;

    for(int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %i! eh = %i.\n", numero, fatorial);

    return 0;
}
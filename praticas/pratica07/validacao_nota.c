#include <stdio.h>

int main() {
    
    int nota = 0;

    printf("Entre com uma nota entre 1 e 10:\n");
    scanf("%i", &nota);

    while(nota <= 0 || nota >= 11) {

        printf("Tente novamente!!\n");
        scanf("%i", &nota);

    }

    printf("Nota valida: %i\n", nota);

    return 0;
}
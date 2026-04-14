#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // Pós-fixado
    printf("\nPos-fixado:\n");
    printf("n++ = %d\n", n++);
    printf("n depois = %d\n", n);

    // Resetando valor
    n--;

    // Pré-fixado
    printf("\nPre-fixado:\n");
    printf("++n = %d\n", ++n);
    printf("n depois = %d\n", n);

    // Decremento pós
    printf("\nDecremento pos-fixado:\n");
    printf("n-- = %d\n", n--);
    printf("n depois = %d\n", n);

    // Resetando
    n++;

    // Decremento pré
    printf("\nDecremento pre-fixado:\n");
    printf("--n = %d\n", --n);
    printf("n depois = %d\n", n);

    return 0;
}
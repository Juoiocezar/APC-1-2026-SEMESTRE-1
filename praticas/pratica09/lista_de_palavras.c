#include <stdio.h>

int main() {

int qt_de_palavras;

printf("Entre com a quantidade de palavras desejadas: ");
scanf("%i", &qt_de_palavras);

char Vetor[qt_de_palavras][50];

for(int i = 0; i < qt_de_palavras; i++) {
    printf("\n%i - ", i + 1);
    scanf("%s", &Vetor[i]);
}


printf("\n_++====Palavras armazenadas no Vetor====++_\n");
for(int i = 0; i < qt_de_palavras; i++){
    printf("\n%i - %s\n", i + 1, Vetor[i]);
}
    return 0;
}
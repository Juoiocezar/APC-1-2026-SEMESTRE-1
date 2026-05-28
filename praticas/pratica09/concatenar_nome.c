#include <stdio.h>
#include <string.h>

int main () {

char primeiro_nome[50];
char ultimo_nome[50];
char primeira_e_ultimo_nome[110];


printf("Entre com o primeiro nome: \n");
scanf("%s", primeiro_nome);

printf("\nEntre com o ultimo nome: \n");
scanf("%s", ultimo_nome);

strcat(primeiro_nome, " ");


printf("Primeiro nome: %s\n", primeiro_nome);
printf("Ultimo nome: %s\n", ultimo_nome);
printf("Primeiro nome com ultimo nome: %s\n", strcat(primeiro_nome, ultimo_nome));

    return 0;
}

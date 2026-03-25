#include <stdio.h>
int main() {

/*Entrada de dados*/

char tecla_pressionada;

printf("pressione uma tecla:");
scanf("%c", &tecla_pressionada);
while(getchar()!= '\n'); // Limpar buffer

printf("Voce pressionou a tecla %c\n", tecla_pressionada);

int idade;

printf("informe a sua idade:");
scanf("%i", &idade);
while(getchar()!= '\n');

printf("voce tem %i anos\n", idade);

float preco;
printf("informe o preço da passagem:");
scanf("%f", &preco);
while(getchar()!= '\n');

printf("o preço da passagem e %.2f pila\n", preco);

    return 0;
}
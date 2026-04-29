#include <stdio.h>

int main() {
  
    char sexo;
    int idade;
    float peso;
    float altura;

printf("qual o seu sexo M para masculino e F para feminino:\n");
scanf("%c", &sexo);

printf("qual  a sua idade:\n");
scanf("%i", &idade);

printf("qual o seu peso:\n");
scanf("%f", &peso);

printf("qual a sua altura em metros:\n");
scanf("%f", &altura);

printf("|~~~~~~~~~~~~~~~~~~~~~~~~~ |\n");
printf("|    Ficha cadastral       |\n");
printf("|~~~~~~~~~~~~~~~~~~~~~~~~~ |\n");
printf("|sexo: %c |   peso: %.2f   |\n", sexo, peso);
printf("|idade: %i |   altura: %.2f|\n", idade, altura);

    return 0;
}
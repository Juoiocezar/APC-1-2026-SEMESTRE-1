#include <stdio.h>

struct pessoa{

char nome[50];
int idade;
float altura;
char sexo[20];

}dados;

int main(){

printf("\nDigite o seu nome: \n");
fgets(dados.nome, 50, stdin);

printf("\nDigite a sua idade: \n");
scanf("%i", &dados.idade);
while(getchar() != '\n');

printf("\nDigite a sua altura: \n");
scanf("%f", &dados.altura);
while(getchar() != '\n');

printf("\nDigite o seu sexo:  \n");
fgets(dados.sexo, 20, stdin);


printf("\n     |Dados cadastrados|");
printf("\n==============================\n");
printf("Nome: %s\n", dados.nome);
printf("Idade: %i\n", dados.idade);
printf("Altura: %.2f\n", dados.altura);
printf("Sexo: %s\n", dados.sexo);
printf("==============================\n");


    return 0;
}
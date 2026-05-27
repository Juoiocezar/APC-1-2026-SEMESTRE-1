#include <stdio.h>

int main() {

int tamanho_do_vetor;
int soma = 0;

printf("Quantos numeros tera o Vetor :");
scanf("%i", &tamanho_do_vetor);

int vetor[tamanho_do_vetor];

for(int i = 0; i < tamanho_do_vetor; i++) {
    printf("%i - ", i + 1);
    scanf("%i", &vetor[i]);
    
  soma += vetor[i];
}

float media_aritimiteca = soma / tamanho_do_vetor;

printf("A Media Aritmetica dos elementos eh: %.2f", media_aritimiteca);



    return 0;
}
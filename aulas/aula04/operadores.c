#include <stdio.h>
# include <math.h>

int main(){
//1.entrada
int operador1;
int operador2;

printf("entre com um numero inteiro");
scanf("%i", &operador1);
while(getchar()!= '\n');

printf("entre com um numero inteiro");
scanf("%i", &operador2);
while(getchar()!= '\n');

//2.processamento
int soma = operador1 + operador2;
int subtraçao = operador1 - operador2;
int multiplicaçao = operador1 * operador2;
float divisao = operador1 / operador2;
int resto = operador1 % operador2; // modulo, não eh percentual

//3. saida
printf("%i + %i = %i\n", operador1, operador2, soma);
printf("%i - %i = %i\n", operador1, operador2, subtraçao);
printf("%i * %i = %i\n", operador1, operador2, multiplicaçao);
printf("%i / %i = %.1f\n", operador1, operador2, divisao);
printf("%i / %i = %.1f\n", operador1, operador2, (operador1 * 1.0f) / operador2);

//funções de matematica
double potencia = pow(2, 3); //2^3 = 2*2*2
double raiz_quadrada = sqrt(2);
double logaritmo log(2);
double seno = sin(2*3.14/180); // 2 graus = 2*180 radianos 

    return 0;
}
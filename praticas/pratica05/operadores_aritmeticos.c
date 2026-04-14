#include <stdio.h>

int main() {

int a;
int b;


printf("coloque o primeiro numero:");
scanf("%i", &a);
while(getchar()!= '\n');

printf("coloque o segundo numero:");
scanf("%i", &b);
while(getchar()!= '\n');

int soma = a + b;
int sub = a - b;
float div = a / b;
int multi = a * b;

printf("soma de %i com %i resulta em : %i\n", a, b, soma);
printf("subtracao de %i com %i resulta em : %i\n", a, b, sub);
printf("divisao de %i com %i resulta em : %.2f\n", a, b, div);
printf("multiplicacao de %i com %i resulta em : %i\n", a, b, multi);

    return 0;
}
#include <stdio.h>

int main () {

char letra;
letra = 'A';
int n1;  // numero um
n1 = 10;
int n2;  // numero dois
n2 = -5;
int n3;  // numero três
n3 = 00004;
double pi;
pi = 3.1415926;

printf("%c\n", letra);
printf("%i\n", n1);
printf("%i\n", n2);
printf("%.5i\n", n3);
printf("%e\n", pi);

int q1;  // quantidade 1
q1 = 2;
int q2;  // quantidade 2
q2 = 1;
int q3;  // quantidade 3
q3 = 3;
float v1;  // valor do produto 1
v1 = 39.99;
float v2;   // valor do produto 2
v2 = 89.90;
float v3;   // valor do produto 3
v3 = 19.99;                                               
float vt;  // valor total
vt = 229.85;


printf("==============================\n");
printf("      N O T A    L E G A L\n");
printf("==============================\n");
printf("Produto         Qtd Valor Unit\n");
printf("Camiseta        %i      %.2f\n", q1, v1);
printf("Calca           %i      %.2f\n", q2, v2);
printf("Meia Social     %i      %.2f\n", q3, v3);
printf("==============================\n");
printf("Total                   %.2f\n", vt);

    return 0;
}
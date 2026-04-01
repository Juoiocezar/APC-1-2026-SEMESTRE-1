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

printf("==============================\n");
printf("      N O T A    L E G A L\n");
printf("==============================\n");
printf("Produto         Qtd Valor Unit\n");
printf("Camiseta        002      39.99\n");
printf("Calca           001      89.90\n");
printf("Meia Social     003      19.99\n");
printf("==============================\n");
printf("Total                   229.85\n");

    return 0;
}
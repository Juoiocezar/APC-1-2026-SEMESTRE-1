#include <stdio.h>

int main() {

int ni;  // numero inteiro


printf("coloque um numero de quatro digitos: ");
scanf("%i", &ni);

int unidade = ni % 10;
int dezena = (ni % 100) /10;
int centena = (ni % 1000) /100;
int milhar = ni / 1000;



printf("milhar: %i\n", milhar);
printf("centena: %i\n", centena);
printf("dezena: %i\n", dezena);
printf("unidade: %i\n", unidade);
printf("%i = %i + %i = %i + %i\n",ni, unidade, dezena*10, centena*100, milhar*1000);

    return 0;
}

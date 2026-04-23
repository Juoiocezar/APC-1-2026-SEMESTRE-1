
#include <stdio.h>

int main() {

float nota1;
float nota2;


printf("qual foi sua nota em algoritimos e programacao:\n");
scanf("%f", &nota1);

printf("qual a sua nota em fundamento de calculo :\n");
scanf("%f", &nota2);

printf(".-----------------------------------------.\n");
printf("| algoritimos e programacao : %.2f       |\n", nota1);
printf("| fundamento de calculo : %.2f           |\n", nota2);
printf(".-----------------------------------------.\n");


    return 0;
}
#include <stdio.h>

int main() {

int ds;  // dia da semana

printf("entre com um dia da sema de 1 a 7\n\n");
printf("1-Domingo\n");
printf("2-Segunda");
printf("    3-Terca\n");
printf("4-Quarta");
printf("     5-Quinta\n");
printf("6-Sexta");
printf("      7-Sabado\n");
scanf("%i", &ds);

if(ds == 1 || ds == 7) {
printf("seu dia eh um final de semana");
}
if(ds || 2 && ds || 3 && ds || 4 && ds || 5 && ds || 5) {
    printf("seu dia eh util");
}

    return 0;
}
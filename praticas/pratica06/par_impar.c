#include <stdio.h>

int main() {

int numero;

printf("entre com um numero inteiro:");
scanf("%i", &numero);

int mod = numero % 2;

if (mod == 0) {
    printf("seu numero eh par");
}
else{
    printf("seu numero eh impar");
}
    return 0;
}
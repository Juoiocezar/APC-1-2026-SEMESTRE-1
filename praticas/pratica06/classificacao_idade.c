#include <stdio.h>

int main() {

    int id;

printf("qual a sua idade:");
scanf("%i", &id);

if(id <= 12) {
    printf(" voce eh crianca");
}
if(id > 12 && id <= 64) {
    printf("voce eh adulto");
}
if(id >= 65) {
    printf("voce eh idoso");
}
    return 0;
}

#include <stdio.h>

int main() {
    
int multiplo = 30;

printf("==========Multiplo de %i entre 1 e 100===========\n", multiplo);

for(int i=1; i<=100; i ++) {
    
    if(i % multiplo == 0) {
        printf("|%i|\n", i);
    }
}


    return 0;
}
#include <stdio.h>

int main () {

    int np;  // número de paises
    np = 195;
    int ni;  // número de idiomas
    ni = 7100;
    long int pp;  // população mundial
    pp = 8274065924;
    long double pa;  // proporção Áurea
    pa = 1.61803398874989484820;

    printf("numero de paises:%i\n", np);
    printf("numero de idiomas:%i\n", ni);
    printf("populaçao mundial:%li\n", pp);    
    printf("proporçao aurea:%.20Lf\n", pa);

    return 0;
}
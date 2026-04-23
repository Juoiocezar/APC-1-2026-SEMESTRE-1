#include <stdio.h>
#define ICMS 0.17
#define PIS 0.0165
#define ISS 0.05 

int main () {

float vp;  // valor do produto

printf("digite o valor do produto: \n");
scanf("%f", &vp);

float icms2 = (vp * ICMS) +vp;
float pis2 = (vp * PIS) + vp;
float iss2 = (vp * ISS) + vp;
float vpit = ((ICMS + PIS + ISS) * vp)+ vp;

printf("valor do produto com ICMS : %.2f\n", icms2);
printf("valor do produto com PIS : %.2f\n", pis2);
printf("valor do produto com ISS : %.2f\n", iss2);
printf("valor do preoduto com os tres impostos: %.2f", vpit);

    return 0;
}
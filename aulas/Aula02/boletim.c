#include <stdio.h>

int main() {

char tecla_pressionada = 'A';
int inteiro = 10;
float decimal = 5.2f; // ate 6 casas decimais
double duplo = 5.3; // ate 12 casas decimais


int codigo_diciplina;
float nota_a1;
float nota_a2;
float nota_a3;
float media_final;

printf("=============================================\n");
printf("                BOLETIM DE NOTAS\n");
printf("=============================================\n");
printf("Diciplina A1      A2     A3     MF\n");
printf("%05i  [%5.1f  %5.1f  %5.1f  %5.1f]\n", codigo_diciplina,
    nota_a1, nota_a2, nota_a3, media_final);

codigo_diciplina = 118;
nota_a1 = 5.2f;
nota_a2= 2.3f;
nota_a3 = 6.0f;
media_final = 5.6f;

printf("%05i  [%5.1f  %5.1f  %5.1f  %5.1f]\n", codigo_diciplina,
    nota_a1, nota_a2, nota_a3, media_final);

codigo_diciplina = 257;
    nota_a1 = 6.0f;
    nota_a2 = 5.0f;
    nota_a3 = 0.0f;
    media_final = 4.0f;

printf("%05i  [%5.1f  %5.1f  %5.1f  %5.1f]\n", codigo_diciplina, 
    nota_a1, nota_a2, nota_a3, media_final);

codigo_diciplina = 91;
    nota_a1 = 4.0f;
    nota_a2 = 4.0f;
    nota_a3 = 4.0f;
    media_final = 4.0f;

    return 0;
}cker
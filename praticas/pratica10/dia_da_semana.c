#include <stdio.h>

int main() {

     enum dias_da_semana {

        DOMINGO = 1,
        SEGUNDA,  //2
        TERCA,    //3
        QUARTA,   //4
        QUINTA,   //5
        SEXTA,    //6
        SABADO    //7
    };

    int dia;

printf("Entre com o dia da semana de 1 a 7 !!  :");
scanf("%i", &dia);
while(getchar() != '\n');

 switch (dia) {
        case DOMINGO:
            printf("Domingo\n");
            break;
        case SEGUNDA:
            printf("Segunda-feira\n");
            break;
        case TERCA:
            printf("Terca-feira\n");
            break;
        case QUARTA:
            printf("Quarta-feira\n");
            break;
        case QUINTA:
            printf("Quinta-feira\n");
            break;
        case SEXTA:
            printf("Sexta-feira\n");
            break;
        case SABADO:
            printf("Sabado\n");
            break;
        default:
            printf("NUMERO INVALIDO!! O numero deve ser entre 1 e 7.\n");
            break;
    }




    return 0;
}

#include <stdio.h>

int main() {
    
   int matriz[3][3];
   
   for(int y = 0; y < 3; y++) {
       for(int x = 0; x < 3; x++) {
           printf("Entre com o valor da posicao [%i][%i] da matriz: ", y, x);
           scanf("%i", &matriz[y][x]);
           if(y == 2 && x == 2){
               printf("\n");
           }
       }
   }
   printf("Matriz 3x3\n\n");
   for(int y = 0; y < 3; y++){
       for(int x = 0; x < 3; x++){
           printf("%i ", matriz[y][x]);
       }
       printf("\n");
   }
   
   printf("\nDiagonal da Matriz 3x3\n");
   printf("\n%i\n  %i\n    %i\n", matriz[0][0], matriz[1][1], matriz[2][2]);

    return 0;
}

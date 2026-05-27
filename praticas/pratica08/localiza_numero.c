
#include <stdio.h>

int main() {
    
    int vetor[10];
    int numero_vetor;
    int copia_loc_vetor;
    int copia_i;
    
    for(int i = 1; i <= 10; i++) {
        printf("Entre com o numero da posição [%i] no Vetor: ", i);
        scanf("%i", &vetor[i]);
        if(i == 10){
            printf("\n");
        }
    }
    

    
    printf("Numero que deseja encontrar no vetor :");
    scanf("%i", &numero_vetor);
    
    for(int i = 1; i <= 10; i++) {
        
        if(vetor[i] == numero_vetor) {
            copia_loc_vetor = vetor[i];
            copia_i = i;
        }
    }

   if(copia_loc_vetor == numero_vetor) {
       printf("O numero %i esta localizado na posicao %i do Vetor", numero_vetor, copia_i);
   }
   else{
       printf("O numero %i nao esta no Vetor.\n", numero_vetor );
   }

    return 0;
}

#include <stdio.h>

int main (){
    
    float primerira_nota[10];
    float segunda_nota[10];
    float media[10];
    
    for(int i = 1; i <= 10; i++) {
        printf("Primeira nota do aluno %i - \n", i);
        scanf("%f", &primerira_nota[i]);
    }
    
    printf("====Segunda nota====\n");
    
    for(int i = 1; i <= 10; i++){
        printf("Segunda nota do aluno %i - \n", i);
        scanf("%f", &segunda_nota[i]);
    }
    
    for(int i = 1; i <= 10; i++) {
        media[i] = (primerira_nota[i] + segunda_nota[i]) / 2;
    }
    
    
    printf("=========================\n");
    printf("     Boletim\n");
    printf("=========================\n");
    
    printf("Alunos  Nota-1  Nota-2    Media\n");
    for(int i = 1; i <= 10; i++) {
        
    printf("%i       %.2f     %.2f     %.2f\n", i, primerira_nota[i], segunda_nota[i], media[i]);
    }
    
    
    return 0;
}
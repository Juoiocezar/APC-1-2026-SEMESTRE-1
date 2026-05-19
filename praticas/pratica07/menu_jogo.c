
#include <stdio.h>

int main() {
   
int escolha;


while(escolha != 4) {
    
printf("=+=+=+=+Menu=+=+=+=+\n");
printf("1 - Novo jogo\n2 - Continuar jogo\n3 - Ver pontuação\n4 - Sair\n");
printf("Ecolha:\n");

    
    scanf("%i", &escolha);
    
    switch(escolha){
    case 1:
    printf("Criando novo jogo\n");
    break;
    case 2:
    printf("Continuando jogo salvo\n");
    break;
    case 3:
    printf("Sua pontuação eh 100!!\n Parabens!!\n");
    break;
    case 4:
    printf("Saindo\n");
    break;
    default:
    printf("Tente novamente!!\n");
    }
} 
    


    return 0;
}

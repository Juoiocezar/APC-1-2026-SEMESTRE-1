
#include <stdio.h>

int main() {
    
    int op;
    
    printf("1-novo jogo\n");
    printf("2-continuar jogo\n");
    printf("3-ver pontuacao\n");
    printf("4-sair\n");
    scanf("%i",&op);
    
    switch(op){
        case 1:
        printf("novo jogo iniciado");
        break;
        
        case 2:
        printf("jogo carregado");
        break;
        
        case 3:
        printf("pontuacao carregada");
        break;
        
        case 4:
        printf("voce saiu do jogo");
        break;
        
        default:
        printf("opcao invalida");
    }
    

    return 0;
}
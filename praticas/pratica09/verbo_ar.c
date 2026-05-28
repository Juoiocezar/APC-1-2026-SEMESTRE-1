#include <stdio.h>
#include <string.h>

int main() {

char verbo[100];
 printf("Entre com o verbo: "); scanf("%s", &verbo);

int tamanho_do_verbo = strlen(verbo);

if(verbo[tamanho_do_verbo - 2] == 'a' && verbo[tamanho_do_verbo - 1] == 'r'){
    printf("O verbo [ %s ] termina em 'AR'.", verbo);
}else{
    printf("O verbo [ %s ] nao termina em 'AR'.", verbo);
}
    return 0;
}
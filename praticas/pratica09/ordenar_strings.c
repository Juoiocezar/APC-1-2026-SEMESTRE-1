#include <stdio.h>
#include <string.h>

int main() {
    
    char string[100];
    char suporte;
    
    char string1[100];
    char suporte1;
    
    char string2[100];
    char suporte2;
    
    
    printf("Entre com a primeira string : ");
    scanf("%s", &string);
    
    printf("Entre com a segunda string : ");
    scanf("%s", &string1);
    
    printf("Entre com a terceira string : ");
    scanf("%s", &string2);
    
    
    printf("\nString 1 : [%s]\n", string);
    printf("String 2 : [%s]\n", string1);
    printf("String 3 : [%s]\n", string2);
    
    int tam_string = strlen(string);
    
    for(int i = 0; i < tam_string; i++){
        for(int j = 0; j < tam_string; j++){
            if(string[j] > string[i]){
                suporte = string[i];
                string[i] = string[j];
                string[j] = suporte;
            }
        }
    }
    
    int tam_string1 = strlen(string1);
    
    for(int i = 0; i < tam_string1; i++){
        for(int j = 0; j < tam_string1; j++){
            if(string1[j] > string1[i]){
                suporte1 = string1[i];
                string1[i] = string1[j];
                string1[j] = suporte1;
            }
        }
    }
    
    int tam_string2 = strlen(string2);
    
    for(int i = 0; i < tam_string2; i++){
        for(int j = 0; j < tam_string2; j++){
            if(string2[j] > string2[i]){
                suporte2 = string2[i];
                string2[i] = string2[j];
                string2[j] = suporte2;
            }
        }
    }
    
    printf("\nString 1 Em ordem alfabetica\n [%s]\n", string);
    printf("\nString 2 Em ordem alfabetica\n [%s]\n", string1);
    printf("\nString 3 Em ordem alfabetica\n [%s]\n", string2);
    
    
    
    
    return 0;
}

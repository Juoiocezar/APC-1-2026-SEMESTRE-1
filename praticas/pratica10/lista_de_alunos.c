#include <stdio.h>

    struct aluno{

        char nome[51];
        long long int matricula;

    }dados[5];

int main() {

for(int i = 0; i < 5; i++){
    printf("\nCadastro- %i\n", i + 1);
    printf("\nNome: ");
    fgets(dados[i].nome, 51, stdin);
    printf("Matricula: ");
    scanf("%lli", &dados[i].matricula);
    while(getchar() != '\n');
}

for(int i = 0; i < 5; i++){

    printf("\n=============================\n");
    printf("Aluno- %i\n\n", i + 1);
    printf("Nome: %s\n", dados[i].nome);
    printf("Matricula: %lli\n", dados[i].matricula);
}


    return 0;
}
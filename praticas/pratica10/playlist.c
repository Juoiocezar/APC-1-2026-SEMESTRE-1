#include <stdio.h>

enum GeneroMusical {
    POP = 1,
    ROCK,
    MPB
};

struct Musica {
    char Titulo[61];
    float Duracao;
    enum GeneroMusical Genero; // Corrigido: Campo agora é do tipo do Enum
} Playlist[5];

int main() {
    int opcao; // Variável auxiliar para ler o gênero de forma segura

    for(int i = 0; i < 5; i++) {
        printf("\n=== Musica %i ===\n", i + 1);
        printf("Nome da musica: ");
        // O " %[^\n]" substitui o fgets limpando o buffer e aceitando espaços
        scanf(" %[^\n]", Playlist[i].Titulo);

        printf("Qual a duracao da musica em minutos: ");
        scanf("%f", &Playlist[i].Duracao); // Corrigido: adicionado o '&'

        printf("1- POP\n2- ROCK\n3- MPB\n");
        printf("Qual o genero da musica de 1 a 3!! : ");
        scanf("%i", &opcao); // Corrigido: adicionado o '&'
        
        // Atribui o valor inteiro convertido para o tipo do Enum
        Playlist[i].Genero = (enum GeneroMusical)opcao; 
    }

    // Loop de exibição
    for(int i = 0; i < 5; i++) {
        printf("\n\n============================");
        printf("\nMusica [%i]", i + 1);
        printf("\nTitulo: %s", Playlist[i].Titulo); // Corrigido: adicionado o %s
        printf("\nDuracao: %.2f minutos", Playlist[i].Duracao); // Corrigido: adicionada a variável e limitado a 2 casas decimais
        printf("\nGenero: ");
        
        switch(Playlist[i].Genero) {
            case POP:  printf("POP");  break;
            case ROCK: printf("ROCK"); break;
            case MPB:  printf("MPB");  break;
            default:   printf("Sem Genero Musical");
        }
    }
    
    printf("\n============================\n");
    return 0;
}
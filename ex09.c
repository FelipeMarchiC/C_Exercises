#include <stdio.h>

int main()
{
    struct Livro {
        char titulo[26];
        int ano;
    } estante[3][3];

    int i, j;

    printf("Bem-vindo à Bibliteca C!\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nColoque um livro!\nTitulo: ");
            gets(estante[i][j].titulo);
            printf("Ano de publicacao: ");
            scanf("%u%*c", &estante[i][j].ano);
        }
    }

    printf("Aqui está a biblioteca:\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\nLivro L%u C%u: %s, %u", i + 1, j + 1, estante[i][j].titulo, estante[i][j].ano);
        }
    }
    printf("\n(L = linha, C = Coluna)\n\n");
    
    return 0;
}

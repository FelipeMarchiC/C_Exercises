#include <stdio.h>

int main()
{
    struct Aluno {
        char nome[31];
        float notas[5];
    } alunos[5];

    int i, j;
    float media;

    printf("Calculador de Medias!");

    for (i = 0; i < 5; i++) {
        printf("\n\nNome do Aluno: ");
        gets(alunos[i].nome);
        printf("Notas:\n");

        for (j = 0; j < 5; j++) {
            printf("Disciplina %u: ", j + 1);
            scanf("%f%*c", &alunos[i].notas[j]);
        }
    }

    printf("\n\n\nMedias da Sala:");
    
    for (i = 0; i < 5; i++) {
        printf("\nNome do Aluno %u: %s", i + 1, alunos[i].nome);

        media = 0;
        for (j = 0; j < 5; j++) {
            media = media + alunos[i].notas[j];
        }
        media = media / 5;

        printf("\nMedia do Aluno: %.2f\n", media);
    }
    
    return 0;
}

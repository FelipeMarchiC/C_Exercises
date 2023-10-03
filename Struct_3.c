#include <stdio.h>

int main() {
    typedef struct
    {
        char nome[31];
        char email[21];
        int idade;
        float salario;
    } Pessoa;

    Pessoa p[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Insira seu nome: ");
        gets(p[i].nome);

        printf("Sua idade: ");
        scanf("%u%*c", &p[i].idade);

        printf("Seu salário: ");
        scanf("%f%*c", &p[i].salario);

        printf("Seu email: ");
        gets(p[i].email);
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nNome P%u: %s", i + 1, p[i].nome);
        printf("\nIdade P%u: %u", i + 1, p[i].idade);
        printf("\nSalario P%u: %.2f", i + 1, p[i].salario);
        printf("\nEmail P%u: %s", i + 1, p[i].email);
        printf("\n");
    }
    
    return 0;
}

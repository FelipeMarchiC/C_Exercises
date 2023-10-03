#include <stdio.h>

int main()
{
    struct Pessoa
    {
        char nome[31];
        int idade;
    } p[10];

    int target, i;

    for (i = 0; i < 10; i++)
    {
        printf("\nInsira seu nome: ");
        gets(p[i].nome);

        printf("Sua idade?\n");
        scanf("%u%*c", &p[i].idade);
    }

    printf("\nDigite uma idade: ");
    scanf("%d%*c", &target);

    for (i = 0; i < 10; i++)
    {
        if (target == p[i].idade)
        {
            printf("\nNome P%u: %s", i + 1, p[i].nome);
            printf("\nIdade P%u: %u\n", i + 1, p[i].idade);
        }
    }
    
    return 0;
}

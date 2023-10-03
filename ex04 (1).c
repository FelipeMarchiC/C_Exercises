#include <stdio.h>

int main()
{
    typedef struct
    {
        char nome[31];
        char email[21];
        int idade;
        float salario;
    } Pessoa;

    Pessoa p1;
    int entrada;

    printf("Insira seu nome: ");
    gets(p1.nome);

    printf("Sua idade: ");
    scanf("%u%*c", &p1.idade);

    printf("Seu salário: ");
    scanf("%f%*c", &p1.salario);

    printf("Seu email: ");
    gets(p1.email);

    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %u", p1.idade);
    printf("\nSalario: %.2f", p1.salario);
    printf("\nEmail: %s", p1.email);

    while (1)
    {
        printf("\n\nDeseja alterar algo?");
        printf("\n1... Idade\n2... Email\n3... Salario\n4... Nao!\n");
        scanf("%u%*c", &entrada);

        if (entrada == 4)
        {
            break;
        }

        switch (entrada)
        {
        case 1:
            printf("Nova idade: ");
            scanf("%u%*c", &p1.idade);
            break;

        case 2:
            printf("Novo email: ");
            gets(p1.email);
            break;

        case 3:
            printf("Novo salario: ");
            scanf("%f%*c", &p1.salario);
            break;
        }

        printf("\nNome: %s", p1.nome);
        printf("\nIdade: %u", p1.idade);
        printf("\nSalario: %.2f", p1.salario);
        printf("\nEmail: %s", p1.email);
    }
    
    return 0;
}

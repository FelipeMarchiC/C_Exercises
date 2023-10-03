#include <stdio.h>

int main() {
    typedef struct {
        char rua[31];
        int numeroCasa;
    } Endereco;

    typedef struct {
        char nome[31];
        char email[21];
        int idade;
        float salario;
        Endereco endereco;
    } Pessoa;
    
    Pessoa p[5];

    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nInsira seu nome: ");
        gets(p[i].nome);

        printf("Sua idade?\n");
        scanf("%u%*c", &p[i].idade);

        printf("\nSeu salário: ");
        scanf("%f%*c", &p[i].salario);

        printf("\nQual seu email?\n");
        gets(p[i].email);

        printf("\nQual seu endereço?");
        gets(p[i].endereco.rua);

        printf("\nNumero da sua casa: ");
        scanf("%u%*c", &p[i].endereco.numeroCasa);
    }

    for (i = 0; i < 5; i++) {
        printf("\n\nNome P%u: %s", i + 1, p[i].nome);
        printf("\nIdade P%u: %u", i + 1, p[i].idade);
        printf("\nSalario P%u: %.2f", i + 1, p[i].salario);
        printf("\nEmail P%u: %s", i + 1, p[i].email);
        printf("\nEndereço: %s n%u", p[i].endereco.rua, p[i].endereco.numeroCasa);
    }
    
    return 0;
}

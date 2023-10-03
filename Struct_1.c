#include <stdio.h>

int main() {
    struct Pessoa
    {
        char nome[31];
        char email[31];
        int idade;
        float salario;
    } p1;

    printf("Insira seu nome: ");
    gets(p1.nome);

    printf("Sua idade?\n");
    scanf("%u%*c", &p1.idade);

    printf("\nSeu salário: ");
    scanf("%f%*c", &p1.salario);

    printf("\nQual seu email?\n");
    gets(p1.email);

    printf("\nNome: %s", p1.nome);
    printf("\nIdade: %u", p1.idade);
    printf("\nSalario: %.2f", p1.salario);
    printf("\nEmail: %s", p1.email);
    
    return 0;
}

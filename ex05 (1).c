
#include <stdio.h>

int main()
{
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
        
    Pessoa p1;

    printf("Insira seu nome: ");
    gets(p1.nome);

    printf("Sua idade: ");
    scanf("%u%*c", &p1.idade);

    printf("Seu salario: ");
    scanf("%f%*c", &p1.salario);

    printf("Seu email: ");
    gets(p1.email);

    printf("Seu endereco: ");
    gets(p1.endereco.rua);

    printf("Numero da sua casa: ");
    scanf("%u%*c", &p1.endereco.numeroCasa);

    printf("\n\nNome: %s", p1.nome);
    printf("\nIdade: %u", p1.idade);
    printf("\nSalario: %.2f", p1.salario);
    printf("\nEmail: %s", p1.email);
    printf("\nEndereco: %s n%u", p1.endereco.rua, p1.endereco.numeroCasa);
    
    return 0;
}

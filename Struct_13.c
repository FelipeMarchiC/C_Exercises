
// 11
#include <stdio.h>

int main()
{
    typedef struct
    {
        char nome[41];
        char cargo[16];
        int codigo;
        int dependentes;
        float salario;
    } Funcionario;

    Funcionario cadastros[100];

    int i, numeroCadastros = 0, entrada, entradaCodigo, achou, sair, ativo = 1;
    
    printf("Bem-vindo ao Registro de Funcionarios!\n");
    printf("Escolha uma das seguintes opções:");

    while (ativo == 1) {
        printf("\n\n[MENU DE OPCOES]\n1- Cadastrar funcionario\n2- Consultar dados de um funcionario\n3- Mostrar todos os funcionarios\n4- Alterar dados de um funcionario\n5- Sair\n\nDigite um numero... ");

        scanf("%u%*c", &entrada);

        switch (entrada)
        {
        case 1:
            printf("\n\n Cadastrando funcionario...");

            if (numeroCadastros == 100) {
                printf("\nERRO! NUMERO MAXIMO DE CADASTROS NO SISTEMA!");
                break;
            }

            printf("\n\nNome: ");
            gets(cadastros[numeroCadastros].nome);
            printf("Cargo: ");
            gets(cadastros[numeroCadastros].cargo);
            printf("Codigo: ");
            scanf("%u%*c", &cadastros[numeroCadastros].codigo);
            printf("Qtd de Dependentes: ");
            scanf("%u%*c", &cadastros[numeroCadastros].dependentes);
            printf("Salario: ");
            scanf("%f%*c", &cadastros[numeroCadastros].salario);

            printf("\n\nCadastrado com Sucesso!");

            numeroCadastros = numeroCadastros + 1;
            break;

        case 2:
            printf("\n\n Consultando dados do funcionario...");
            if (numeroCadastros == 0) {
                printf("\nERRO! NENHUM CADASTRO NO SISTEMA!");
                break;
            }

            printf("\n\nDigite o codigo do funcionario... ");
            scanf("%u%*c", &entradaCodigo);

            achou = 0;
            for (i = 0; i < numeroCadastros; i++) {
                if (entradaCodigo == cadastros[i].codigo) {
                    printf("\n\nNome: %s", cadastros[i].nome);            
                    printf("\nCargo: %s", cadastros[i].cargo);
                    printf("\nCodigo: %u", cadastros[i].codigo);
                    printf("\nQtd de Dependentes: %u", cadastros[i].dependentes);
                    printf("\nSalario: %.2f", cadastros[i].salario);
                    achou = 1;
                    break;
                }
            }

            if (achou == 0) {
                    printf("\n\nCodigo invalido...");
            }
            break;

        case 3:
            printf("\n\n Lista de Funcionarios: ");
            if (numeroCadastros == 0) {
                printf("\nNENHUM CADASTRO NO SISTEMA!");
                break;
            }

            for (i = 0; i < numeroCadastros; i++) {
                printf("\n%s | %u", cadastros[i].nome, cadastros[i].codigo);
            }
            break;

        case 4:
            printf("\n\n Alterando dados do funcionario...");
            if (numeroCadastros == 0) {
                printf("\nERRO! NENHUM CADASTRO NO SISTEMA!");
                break;
            }

            printf("\n\nDigite o codigo do funcionario... ");
            scanf("%u%*c", &entradaCodigo);

            achou = 0;
            sair = 0;
            for (i = 0; i < numeroCadastros; i++) {
                if (entradaCodigo == cadastros[i].codigo) {
                    
                    while (sair == 0) {
						printf("\n\nFuncionario: %s", cadastros[i].nome);            
                        printf("\nCargo: %s", cadastros[i].cargo);
                        printf("\nCodigo: %u", cadastros[i].codigo);
                        printf("\nQtd de Dependentes: %u", cadastros[i].dependentes);
                        printf("\nSalario: %.2f", cadastros[i].salario);
						
                        printf("\n\n[MENU DE OPÇÕES]\n1- Mudar nome\n2- Cargo\n3- Qtd de Dependentes\n4- Salario\n5- Sair\n\nDigite um numero... ");
                        scanf("%u%*c", &entrada);

                        switch (entrada) {
                            case 1:
                                printf("\nNovo Nome: ");
                                gets(cadastros[i].nome);
                                break;
                            case 2:
                                printf("\nNovo Cargo: ");
                                gets(cadastros[i].cargo);
                                break;
                            case 3:
                                printf("\nNova Qtd de Dependentes: ");
                                scanf("%u%*c", &cadastros[i].dependentes);
                                printf("\n");
                                break;
                            case 4:
                                printf("\nNovo Salario: ");
                                scanf("%f%*c", &cadastros[i].salario);
                                printf("\n");
                                break;
                            case 5:
                                printf("Ate...!");
                                sair = 1;
                                break;
                        }
                    }
                    achou = 1;
                    break;
                }

            }
            if (achou == 0) {
                    printf("\n\nCodigo invalido...");
            }
            break;

        case 5:
            printf("\n\nAte..!");
            ativo = 0;
            break;
        }
    }
    
    return 0;
}

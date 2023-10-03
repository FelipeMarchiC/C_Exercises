#include <stdio.h>

int main() {
    struct Pessoa
    {
        char nome[31];
        int idade;
    } p[5];

    int i, j, cpy, flag;

    for (i = 0; i < 5; i++) {
        printf("\nInsira seu nome: ");
        gets(p[i].nome);

        printf("Sua idade?\n");
        scanf("%u%*c", &p[i].idade);
    }

    for (i = 0; i < 5; i++) {
		flag = 0;
        for (j = 0; j < 5; j++) {
            if (p[i].idade < p[j].idade) {
                cpy = p[j].idade;
                p[j].idade = p[i].idade;
                p[i].idade = cpy;
                flag = 1;
            }
            if (flag == 1) {
				break;
			}
        }
    }

    for (i = 0; i < 5; i++) {
        printf("\n\nNome P%u: %s", i + 1, p[i].nome);
        printf("\nIdade P%u: %u", i + 1, p[i].idade);
    }
    
    return 0;
}

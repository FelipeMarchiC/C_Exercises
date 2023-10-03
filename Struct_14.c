#include <stdio.h>

int main () {
        typedef struct {
        char sexo[2];
        int idade;
        int filhos;
        float salario;
    } Habitantes;

    Habitantes censo[20];
    int mulheres = 0, i;
    float maiorSalario, menorSalario, mediaSalarial = 0, mediaFilhos = 0, mulheresAltaRenda = 0;

    printf("Bem-vindo ao censo da cidade!\n");

    printf("\nQual seu sexo?\n[M pra Homem]\n[F pra Mulher]\n");
    gets(censo[0].sexo);

    printf("Qual sua idade: ");
    scanf("%u%*c", &censo[0].idade);

    printf("Quantos filhos tem: ");
    scanf("%u%*c", &censo[0].filhos);

    printf("Qual seu salário: ");
    scanf("%f%*c", &censo[0].salario);

    mediaFilhos = mediaFilhos + censo[0].filhos;
    mediaSalarial = mediaSalarial + censo[0].salario;
    menorSalario = censo[0].salario;
    maiorSalario = censo[0].salario;

    if (censo[0].sexo[0] == 'F') {
        mulheres = mulheres + 1;
        if (censo[0].salario > 1500) {
                mulheresAltaRenda = mulheresAltaRenda + 1;
        }
    }

    for (i = 1; i < 20; i++) {
        printf("\nQual seu sexo?\n[M pra Homem]\n[F pra Mulher]\n");
        gets(censo[i].sexo);

        printf("Qual sua idade: ");
        scanf("%u%*c", &censo[i].idade);

        printf("Quantos filhos tem: ");
        scanf("%u%*c", &censo[i].filhos);

        printf("Qual seu salário: ");
        scanf("%f%*c", &censo[i].salario);

        mediaFilhos = mediaFilhos + censo[i].filhos;
        mediaSalarial = mediaSalarial + censo[i].salario;

        if (censo[i].salario > maiorSalario) {
            maiorSalario = censo[i].salario;
        }
        
        if (censo[i].salario < menorSalario) {
            menorSalario = censo[i].salario;
        }

        if (censo[i].sexo[0] == 'F') {
            mulheres = mulheres + 1;
            if (censo[i].salario > 1500) {
                mulheresAltaRenda = mulheresAltaRenda + 1;
            }
        } 
    }

    mediaSalarial = mediaSalarial / 20;
    mediaFilhos = mediaFilhos / 20;
    mulheresAltaRenda = (mulheresAltaRenda / mulheres) * 100;

    printf("\n\nResultados do Censo:");
    printf("\n\nMedia Salarial da Populacao: %.3f", mediaSalarial);
    printf("\nMedia de filhos da Populacao: %.1f", mediaFilhos);
    printf("\nMaior Salario entre a populacao: %.2f", maiorSalario);
    printf("\nMenor Salario entre a populacao: %.2f", menorSalario);
    printf("\nPercentual de mulheres que ganham mais que R$1.500,00: %.2f%%", mulheresAltaRenda);
    
    return 0;
}

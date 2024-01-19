#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(){
	FILE *arquivo;
	arquivo = fopen("texto.txt", "w");
	
	int inteiro = 141;
	float flutuante = 72.384;
	char caracteres[15] = "Boi Ben\n";
	
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...");
	} else {
		printf("Arquivo lido com sucesso!\n");
		printf("Colocando dados...\n");
	    fprintf(arquivo, "%d\n", inteiro);
	    fprintf(arquivo, "%f\n", flutuante);
	    fprintf(arquivo, "%s\n", caracteres);
	}
	
	int retorno = fclose(arquivo);
	printf("Retorno: %u\n\n", retorno);
	
	
	
	arquivo = fopen("texto.txt", "r");
	
	int a;
	float b;
	char c[50];
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...");
	} else {
		fscanf(arquivo, "%d\n", &a);
		fscanf(arquivo, "%f\n", &b);
		fgets(c, 50, arquivo);
		c[strlen(c)-1] = '\0';
		
		printf("Inteiro: %u\n", a);
		printf("Float: %f\n", b);
		printf("String: %s\n", c);
	}
	
	retorno = fclose(arquivo);
	printf("Retorno: %u", retorno);
	
	return 0;
}*/

/*int main(){
	FILE *arquivo;
	arquivo = fopen("texto.txt", "w");
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...");
	} else {
		printf("Arquivo lido com sucesso!\n");
		printf("Colocando dados...\n");
	    fprintf(arquivo, "%d,%d,%d,%d,%d\n", 1, 2, 3, 4, 5);
	    fprintf(arquivo, "%f,%f,%f\n", 1.5, 2.25, 3.75);
	}
	
	int retorno = fclose(arquivo);
	printf("Retorno: %u\n\n", retorno);
	
	
	
	arquivo = fopen("texto.txt", "r");
	
	int a, b, c, d, e;
	float x, y, z;
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...");
	} else {
		fscanf(arquivo, "%d,%d,%d,%d,%d\n", &a, &b, &c, &d, &e);
		fscanf(arquivo, "%f,%f,%f\n", &x, &y, &z);
		
		printf("Inteiros: %u %u %u %u %u\n", a, b, c, d, e);
		printf("Float: %f %f %f\n", x, y, z);
	}
	
	retorno = fclose(arquivo);
	printf("Retorno: %u", retorno);
	
	return 0;
}*/

int main(){
	FILE *arquivo;
	arquivo = fopen("texto.txt", "w");
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...\n");
	} else {
		printf("Arquivo carregado!\n");
		char nome[50] = "";
		
		while (strcmp(nome, "final")) {
			
			gets(nome);
			
			if (strcmp(nome, "final")) {
				fprintf(arquivo, "%s\n", nome); 
			}
		}
	}
	
	fclose(arquivo);
	
	arquivo = fopen("texto.txt", "r");
	
	if (arquivo == NULL) {
		printf("Arquivo não foi carregado...\n");
	} else {
		printf("Arquivo carregado!\n");
		char nomeArquivo[50] = "";
		char* operacao = fgets(nomeArquivo, 50, arquivo);
		
		printf("Lista de Nomes:\n");
		while (operacao != NULL) {
			printf("%s\n", nomeArquivo);
			fgets(nomeArquivo, 50, arquivo);
			printf("%s\n", nomeArquivo);
		}
	}
	
	return 0;
}

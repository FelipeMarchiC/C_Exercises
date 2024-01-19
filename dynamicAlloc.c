#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*char* concatenador(char* str1, char* str2) {
	char* str3 = (char*) malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));
	if (str3 == NULL) {
	  printf("Erro em alocar...);
	  exit(1);
	}
	strcpy(str3, strcat(str1, str2));
	return str3; 
}

int main(){
	char str1[20], str2[20];
	printf("STR1: ");
	gets(str1);
	printf("\nSTR2: ");
	gets(str2);
	
	char* str3 = concatenador(str1, str2);
	printf("\n\nSTRCAT: %s", str3);
	
	free(str3);
	return 0;
}*/

/*int main(){
	char** vetorSTR = (char**) malloc(1 * sizeof(char*));
	int tamanho = 1, control = 1, i = 0;
	printf("Digite as strings, 0 para sair.\n\n\n");
	do {
		char str[50];
		printf("STR%u: ", tamanho);
		gets(str);
		vetorSTR[tamanho - 1] = (char *) malloc(strlen(str) + 1);
		strcpy(vetorSTR[tamanho - 1], str);
		printf("Control: ");
		scanf("%d%*c", &control);
		printf("\n\n");
		
		if (control != 0) {
			tamanho = tamanho + 1;
			vetorSTR = (char **) realloc(vetorSTR, tamanho);
		}
	} while (control != 0);
	
	printf("\nStrings Digitadas:");
	for(i = 0; i<tamanho; i++){
		printf("\nSTR%u: %s", i + 1, vetorSTR[i]);
	}
	
	for(i = 0; i<tamanho-1; i++){
		free(vetorSTR[i]);
	}
	free(vetorSTR);
	
	return 0;
}*/

/*char* acharSegundaPalavra(char* str){
	char *espaco = str;
	int tamanhoP1 = 0;
	while (' ' != *espaco) {
		espaco++;
		tamanhoP1++;
	}
	espaco++;
	
	char* palavra2 = (char*) malloc((strlen(espaco) + 1) * sizeof(char));
	strcpy(palavra2, str);
	
	return palavra2;
}

int main() {
	char str[50];
	printf("STR c/ duas palavras separadas...\n");
	gets(str);
	
	char* palavra2 = acharSegundaPalavra(str);
	printf("\nPalavra 2: %s", palavra2);
	
	free(palavra2);
	return 0;
}*/

/*char* digitarLetras() {
	int c = 0, tamanho = 0;
	char* str = (char *) malloc(1);
	
	printf("DIGITE LETRAS!:\n");
	while (c != '\n') {
		c = getchar();
		if (c != '\n') {
			tamanho++;
			str = (char *) realloc(str, (tamanho + 1));
			str[tamanho - 1] = c;
			printf("%c ", str[tamanho-1]);
		}
	}
	str[tamanho] = '\0';
	
	
	return str;
}

int main() {
	char* string = digitarLetras();
	printf("\n\nString: %s", string);
	free(string);
	return 0;
}*/

/*int* criarInteiro() {
	int* inteiro = (int *) malloc(1 * sizeof(int));
	scanf("%d%*c", inteiro);
	
	return inteiro;
}

int main() {
	int* inteiro = criarInteiro();
	printf("\nInteiro Criado: %d", *inteiro);
	return 0;
}*/

/*struct Aluno {
	char nome[50];
	float nota1, nota2;
};

struct Disciplina {
	char nome[50];
	int qtdAlunos;
	struct Aluno* pAluno;
};

int main() {
	int qtdDisciplinas, i, j;
	float media;
	
	printf("Quantas disciplinas?\n");
	scanf("%u%*c", &qtdDisciplinas);
	printf("\n");
	
	struct Disciplina* disciplinas = (struct Disciplina*) malloc(qtdDisciplinas * sizeof(struct Disciplina));
	
	for (i = 0; i < qtdDisciplinas; i++) {
		printf("\n- Disciplina %u:\n", i+1);
		printf("Nome: ");
		gets(disciplinas[i].nome);
		
		printf("Qtd de Alunos: ");
		scanf("%u%*c", &disciplinas[i].qtdAlunos);
		
		struct Aluno* alunos = (struct Aluno*) malloc(disciplinas[i].qtdAlunos * sizeof(struct Aluno));
		disciplinas[i].pAluno = alunos;
		
		printf("\n\n> Alunos dessa Disciplina:\n");
		for(j = 0; j < disciplinas[i].qtdAlunos; j++) {
			printf("- Aluno %u:\n", j+1);
			printf("Nome: ");
			gets(alunos[j].nome);
			
			printf("Nota 1: ");
			scanf("%f%*c", &alunos[j].nota1);
			
			printf("Nota 2: ");
			scanf("%f%*c", &alunos[j].nota2);
			printf("\n");
		}
	}
	
	printf("\n\n\nEXIBINDO INFOS:\n\n");
	for (i = 0; i < qtdDisciplinas; i++) {
		printf("- Disciplina %u:\n", i+1);
		printf("Nome: %s\n", disciplinas[i].nome);
		
		printf("Qtd de Alunos: %u\n\n", disciplinas[i].qtdAlunos);
		
		media = 0;
		
		printf("> Alunos dessa Disciplina:\n");
		for(j = 0; j < disciplinas[i].qtdAlunos; j++) {
			printf("- Aluno %u:\n", j+1);
			printf("Nome: %s\n", disciplinas[i].pAluno[j].nome);
			
			printf("Nota 1: %.2f\n", disciplinas[i].pAluno[j].nota1);
			
			printf("Nota 2: %.2f\n\n", disciplinas[i].pAluno[j].nota2);
			
			media = media + (disciplinas[i].pAluno[j].nota1 + disciplinas[i].pAluno[j].nota2) / 2;
		}
		
		media = media / disciplinas[i].qtdAlunos;
		printf("\nMedia da Disciplina: %.2f\n\n", media);
	}
	
	for (i = 0; i < qtdDisciplinas; i++) {
		free(disciplinas[i].pAluno);
	}
	free(disciplinas);
	
	return 0;
}*/


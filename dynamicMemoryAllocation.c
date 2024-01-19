#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*char* concatenar(char* str1, char* str2) {
	char* strCat = (char *) malloc((strlen(str1) + strlen(str2)) * sizeof(char));
	strcpy(strCat, strcat(str1, str2));
	
	printf("\nSTR1 + STR2 = %d SIZE", strlen(strCat));
	return strCat;
}

int main() {
	char str1[20];
	char str2[20];
	
	printf("STR1: ");
	gets(str1);
	printf("\nSTR2: ");
	gets(str2);
	char* STRCAT = concatenar(str1, str2);
	
	printf("\n\nSTR CAT: %s", STRCAT);
	free(STRCAT);
	return 0;
}*/

/*int main() {
	char** strList = (char**) malloc(6 * sizeof(char *));
	int tamanho = 6;
	
	if (strList == NULL) {
		printf("Erro em alocar...\n");
        exit(1);
    }
	
	int opcao = 0, i = 0;
	
	printf("STR LIST:\n");
	while(opcao != 1) {
		char str[100];
        
		printf("\nSTR%u: ", i);
		gets(str); 
		
		if (i % 5 == 0 && i != 0) {
			printf("\n\nExit... ");
			scanf("%d%*c", &opcao);
		}
		
		strList[i] = (char *) malloc((strlen(str) + 1));
		strcpy(strList[i], str);
		
		i++;
		
		if (i >= tamanho) {
			tamanho = tamanho + 5;
			strList = (char **) realloc(strList, tamanho);
		}
	}
	
	printf("\n\nALL STRs:\n");
	int j;
	for (j = 0; j < i; j++) {
		printf("%s\n", strList[j]);
	}
	
	for (j = 0; j < i; j++) {
        free(strList[j]);
    }
	free(strList);
	
	return 0;
}*/

/*char* acharSegundaPalavra(char* str) {
	int tamanhoP1 = 0;
	
	while (' ' != *str) {
		str++;
		tamanhoP1++;
	}
	str++;
	
	char* segundaPalavra = (char *) malloc((strlen(str) - tamanhoP1) * sizeof(char));
	strcpy(segundaPalavra, str);
	
	return segundaPalavra;
}

int main() {
	char strDuo[50];
	printf("Duas palavras, separadas por espaço...\n");
	gets(strDuo);
	
	printf("\n\nSegunda Palavra: %s", acharSegundaPalavra(strDuo));
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

struct Aluno {
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
}







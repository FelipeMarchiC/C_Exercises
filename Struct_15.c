#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[100];
	float nota1;
	float nota2;
	char email[100];
	float media;
} Aluno;

Aluno preencheAluno(char nome[], float nota1, float nota2, char email[]) {
	Aluno aluno;
	
	strcpy(aluno.nome, nome);
	aluno.nota1 = nota1;
	aluno.nota2 = nota2;
	strcpy(aluno.email, email);
	
	aluno.media = (nota1 + nota2) / 2.0;
	
	return aluno;
}

int main() {
	char nome[100];
	float nota1, nota2;
	char email[100];
	
	printf("Nome: ");
	gets(nome);
	
	printf("Email: ");
	gets(email);
	
	printf("N1: ");
	scanf("%f%*c", &nota1);
	
	printf("N2: ");
	scanf("%f%*c", &nota2);
	
	Aluno aluno = preencheAluno(nome, nota1, nota2, email);
	
	printf("\nInformacoes do Aluno:\n");
	printf("Nome: %s\n", aluno.nome);
	printf("Email: %s\n", aluno.email);
	printf("Nota1: %.2f\n", aluno.nota1);
	printf("Nota2: %.2f\n", aluno.nota2);
	printf("Media: %.2f\n", aluno.media);
	
	return 0;
}
	
	

#include <stdio.h>

typedef struct {
	char titulo[50];
	char autor[50];
	int ano;
} Livro; 

void imprimirLivro(Livro livro) {
	printf("Titulo: %s\n", livro.titulo);
	printf("Autor: %s\n", livro.autor);
	printf("Ano: %u\n", livro.ano);
}

int main() {
	Livro livro1 = {"Dom Casmurro", "Machado de Assis", 1899};
	
	imprimirLivro(livro1);
	
	return 0;
}

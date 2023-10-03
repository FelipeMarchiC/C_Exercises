#include <stdio.h>
#include <string.h>

int contarCaracteres(char string[]) {
	int tamanho = strlen(string);
	return tamanho;
}

int main() {
	char string[] = "Hello World!";
	int tamanho = contarCaracteres(string);
	
	printf("A string '%s' possui %d caracteres.\n", string, tamanho);
}

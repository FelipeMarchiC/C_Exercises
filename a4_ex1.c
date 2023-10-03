#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char name[10][16];
	char str_copy[16];
	int i, ordered = 0;
		
	for (i = 0; i < 10; i++) {
		printf("\nInsira o nome, c/ no maximo 15 caracteres: ");
		gets(name[i]);
	}
	
	while (ordered == 0) {
		ordered = 1;
		
		for (i = 0; i < 9; i++) {
			if ((strcmp(name[i], name[i+1])) > 0) {
				strcpy(str_copy, name[i]);
				strcpy(name[i], name[i+1]);
				strcpy(name[i+1], str_copy);
				ordered = 0;
			}
		}
	}
	
	printf("\nLista de Nomes: \n");
	for (i = 0; i < 10; i++) {
		puts(name[i]);
	}
	
	return 0;
}

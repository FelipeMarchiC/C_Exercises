#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char name[10][16];
	char str_copy[16], l[2];
	int i, j, flag = 0, ordered = 0;
		
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
			
			if (ordered == 1) {
				printf("\nQuebrou em i: %u", i);
			}
		}
	}
	
	printf("\nLista de Nomes: \n");
	for (i = 0; i < 10; i++) {
		puts(name[i]);
	}
	
	printf("\nInsira uma letra... \n");
	gets(l);
	
	printf("\nLista de nomes com a letra %c: \n", l[0]);
	for (i = 0; i < 10; i++) {
		for (j = 0; j < strlen(name[i]); j++) {
			if (name[i][j] == l[0]) {
				puts(name[i]);
				flag = 1;
				break;
			}
		}
	}
	
	if (flag == 0) {
	printf("Nenhum nome tem essa letra...");
	}
	
	return 0;
}

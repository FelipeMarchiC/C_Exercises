#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
	char word[20];
	int i, len;
	
	printf("Insira um nome...\n");
	gets(word);
	len = strlen(word);
	
	printf("\nAs quatro primeiras letras desse nome sao...\n");
	i = 0;
	while (i < 4 && i < len) {
		printf("%c \n", word[i]);
		i++;
	}
	
	return 0; 
}

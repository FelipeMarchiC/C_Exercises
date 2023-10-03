#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
	char word[20];
	
	printf("Insira um nome... ");
	gets(word);
	
	printf("\nEsse nome tem %u letras!", strlen(word));
	
	return 0; 
}

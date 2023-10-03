#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){ 
	char fullName[50], fullNameUpper[50], fullNameLower[50];
	int i;
	
	printf("Insira seu nome... ");
	gets(fullName);
	
	for (i = 0; i < strlen(fullName); i++) {
		fullNameLower[i] = tolower(fullName[i]);
		fullNameUpper[i] = toupper(fullName[i]);
	}
	
	fullNameLower[strlen(fullName)] = '\0';
	fullNameUpper[strlen(fullName)] = '\0';
	
	printf("\nSeu nome em minuscula: %s\n\n", fullNameLower);
	printf("Seu nome em maisculo: %s\n\n", fullNameUpper);
	
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 
	char fullName[40], name[20], surname[20];
	
	printf("Insira seu nome... ");
	gets(name);
	
	printf("\nInsira seu sobrenome... ");
	gets(surname);
	
	strcpy(fullName, name);
	strcat(fullName, " ");
	strcat(fullName, surname);
	
	printf("\nSeu nome: %s\n", fullName);
	printf("Numero de caracteres: %u \n", strlen(fullName));
	printf("Seu primeiro caractere e... %c \n", fullName[0]);
	printf("Seu ultimo caractere e... %c \n", fullName[strlen(fullName)-1]);
	
	return 0; 
}

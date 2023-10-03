#include <stdio.h>
#include <string.h>

void concatenador(char a[], char b[]) {
	strcat(a, b);
}

int main() {
	char a[50], b[25];
	
	printf("STR1: ");
	gets(a);
	
	printf("STR2: ");
	gets(b);
	
	concatenador(a, b);
	
	printf("Strings concatenadas: %s\n", a);
	return 0;
}


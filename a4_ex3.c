#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char word[20];
	int i, len, palindrome = 1;
	
	printf("Insira sua palavra... \n");
	gets(word);
	len = strlen(word);
	
	for (i = 0; i < (len / 2) ; i++) {	
		if (word[i] != word[len - 1 - i]) {
			palindrome = 0;
			break;
		}
	}
	
	if (palindrome == 1) {
		printf("Essa palavra e palindromo!");
	} else {
		printf("Essa palavra nao e palindromo...");
	}
	
	return 0;
}

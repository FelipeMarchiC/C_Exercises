
#include <stdio.h>

void media(float precos[], int tamanho) {
	int i;
	float soma = 0;
	
	for (i = 0; i < tamanho; i++) {
		soma = soma + precos[i];
	}
	float media = soma / tamanho;
	
	printf("A media eh: %.2f\n", media);
}

int main() {
	float precos[] = {12.5, 23.75, 18.22, 10.3, 5.8};
	
	media(precos, 5);
	
	return 0;
}

#include <stdio.h>

float somarValores(float array[], int tamanho) {
	int i;
	float soma = 0.0;
	
	for (i = 0; i < tamanho; i++) {
		soma = soma + array[i];
	}
	
	return soma;
}

int main() {
	float valores[] = {2.5, 5.0, 1.2, 7.8};
	float soma = somarValores(valores, 4);
	printf("A soma dos valores do Array é %.2f\n", soma);
	
	return 0;
}

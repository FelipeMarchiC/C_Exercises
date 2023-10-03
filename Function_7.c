#include <stdio.h>

int contador(int a[], int tamanho, int numero) {
	int contagem = 0, i;
	
	for (i = 0; i < tamanho; i++) {
		if (a[i] == numero) {
			contagem++;
		}
	}
	
	return contagem;
}

int main() {
	int numeros[] = {2, 5, 9, 2, 5};
	int numero = 5;
	
	int quantidade = contador(numeros, 6, numero);
	
	printf("O numero %d aparece %d vezes no array\n", numero, quantidade);
	
	return 0;
}

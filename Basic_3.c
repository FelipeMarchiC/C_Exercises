#include <stdio.h>

int mostrador(int a[], int tamanho) {
	int maior = a[0], i;
	
	printf("Array: ");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", a[i]);
		
		if (maior < a[i]) {
			maior = a[i];
		}
	}
	printf("\n");
	
	return maior;
}

int main() {
	int tamanho, i;
	printf("Digite tamanho: ");
	scanf("%d%*c", &tamanho);
	
	int a[tamanho];
	printf("Digite elementos:\n");
	for (i = 0; i < tamanho; i++) {
		scanf("%d%*c", &a[i]);
	}
	
	int maioral = mostrador(a, tamanho);
	printf("Maior N: %d", maioral);
	return 0;
}


#include <stdio.h>

int somaRecursiva(n) {
	if (n == 1) {
		return 1;
	} else {
		printf("%u ", n);
		return n + somaRecursiva(n - 1);
	}
}

int main() {
	int n;
	
	printf("N: ");
	scanf("%u%*c", &n);
	
	int soma = somaRecursiva(n);
	printf("\nSoma: %u", soma);
	
	return 0;
}

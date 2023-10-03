#include <stdio.h>

int somaRecursiva(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return somaRecursiva(a+1, b-1);
	}
}

int main() {
	int a, b;
	
	printf("Digite valor de a: ");
	scanf("%u%*c", &a);
	
	printf("Digite valor de b: ");
	scanf("%u%*c", &b);
	
	int soma = somaRecursiva(a, b);
	printf("Soma: %u", soma);
	
	return 0;
}

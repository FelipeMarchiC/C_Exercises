#include <stdio.h>

int main() {
	int x, i, fatorial = 1;
	
	printf("Insira o numero inteiro: ");
	scanf("%d%*c", &x);
	
	if (x == 0) {
		printf("O fatorial de 0 e: 1");
	} else {
		for (i = 2; i <= x; i++) {
			fatorial = fatorial * i;
		}
		printf("O fatorial de %d e: %d", x, fatorial);
	}
	
	return 0;
}

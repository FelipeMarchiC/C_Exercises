#include <stdio.h>

int main() {
	int N;
	float i, termo, soma_total = 0;
	
	printf("Insira seu numero: ");
	scanf("%u%*c", &N);
	
	for (i = 0; i < N ; i++) {
		termo = (1 + i) / (1 + i * 2);
		printf("\n%f", termo);
		soma_total = soma_total + termo;
	}
	
	printf("\n\nA soma total dos termos e: %.2f", soma_total);
	
	return 0;
}

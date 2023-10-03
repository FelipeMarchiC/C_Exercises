#include <stdio.h>

int potencia(x, n) {
	if (n == 1) {
		return x;
	} else {
		return x * potencia(x, n-1);
	}
}

int main() {
	int x, n;
	
	printf("X: ");
	scanf("%u%*c", &x);
	
	printf("N: ");
	scanf("%u%*c", &n);
	
	int pot = potencia(x, n);
	printf("Potencia: %u", pot);
	
	return 0;
}

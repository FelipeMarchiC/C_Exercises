#include <stdio.h>

float comparador(float a, float b) {
	return ((a > b) ? a : b);
}

int main() {
	float a = 20, b = 10;
	float maior = comparador(a, b);
	printf("Maior: %f", maior);
	return 0;
}

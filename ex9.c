#include <stdio.h>

float multiplicar(int inteiro, float flutuante) {
	return inteiro * flutuante;
}

int main() {
	int inteiro = 5;
	float flutuante = 3.14;
	
	float resultado = multiplicar(inteiro, flutuante);
	
	printf("O resultado entre %d e %.2f eh %.2f\n", inteiro, flutuante, resultado);
	
	return 0;
}
	

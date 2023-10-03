#include <stdio.h>

int main() {
	int nota, notas_verdes = 0, notas_amarelas = 0, notas_vermelhas = 0;
	
	do {
		printf("\nInserir Nota..... ");
		scanf("%u%*c", &nota);
		
		if (nota < 0) {
			break;
		}
		
		if (nota < 4) {
			notas_vermelhas++;
		} else {
			if (nota < 6) {
				notas_amarelas++;
			} else {
				notas_verdes++;
			}
		} 
	} while (nota > 0);
	
	printf("\nNumero de notas acima ou igual a 6: %u \n", notas_verdes);
	printf("Numero de notas entre 4 e 6: %u \n", notas_amarelas);
	printf("Numero de notas abaixo de 4: %u \n", notas_vermelhas);
		
	return 0;
}

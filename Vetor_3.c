#include <stdio.h>

int main() {
	
	int matrix[3][3];
	int i, j, symmetric = 1;
	
	printf("Construindo sua matriz... \n");
	for (i = 0; i < 3; i++) {
		printf("\nInsira o numero na linha %u...\n", i + 1);
		for (j = 0; j < 3; j++) {
		printf("Coluna %u: ", j + 1);
		scanf("%d%*c", &matrix[i][j]);
		}
	}
	
	i = 0;
	while (i < 3 && symmetric == 1) {
		for (j = 0; j < 3; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				symmetric = 0;
				break;
			}
		}
		i++;
	}
	
	printf("\n[%d %d %d] \n", matrix[0][0], matrix[0][1], matrix[0][2]);
	printf("[%d %d %d] \n", matrix[1][0], matrix[1][1], matrix[1][2]);
	printf("[%d %d %d] \n", matrix[2][0], matrix[2][1], matrix[2][2]);
	
	if (symmetric) {
		printf("\nEssa matrix e simetrica!");
	} else {
		printf("\nEssa matrix nao e simetrica!");
	}
	
	return 0;
}

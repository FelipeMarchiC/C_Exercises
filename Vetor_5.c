#include <stdio.h>

int main() {
	//insira as dimensões da Matrix A (m x n) nas variáveis m e n...
	//insira a dimensões da Matrix B (n x p) nas variáveis n e p...
	
	int m, n, p;
	printf("Insira o numero de linhas da Matrix A... ");
	scanf("%u%*c", &m);
	printf("Insira o numero de colunas da Matrix A... ");
	scanf("%u%*c", &n);
	printf("Insira o numero de colunas da Matrix B... ");
	scanf("%u%*c", &p);
	
	
	int matrixA[m][n], matrixB[n][p];
	int result, i, j, k;
		
	
	printf("Construindo sua matriz A... \n");
	for (i = 0; i < m; i++) {
		printf("\nInsira o numero na linha %u...\n", i + 1);
		for (j = 0; j < n; j++) {
		printf("Coluna %u: ", j + 1);
		scanf("%d%*c", &matrixA[i][j]);
		}
	}
	
	printf("\nConstruindo sua matriz B... \n");
	for (i = 0; i < n; i++) {
		printf("\nInsira o numero na linha %u...\n", i + 1);
		for (j = 0; j < p; j++) {
		printf("Coluna %u: ", j + 1);
		scanf("%d%*c", &matrixB[i][j]);
		}
	}
	
	printf("\nMatrix A:");
	for (i = 0; i < m; i++) {
		printf("\n[ ");
		for (j = 0; j < n; j++) {
			printf("%d ", matrixA[i][j]);
		}
		printf("]");
	}
	
	printf("\n\nMatrix B:");
	for (i = 0; i < n; i++) {
		printf("\n[ ");
		for (j = 0; j < p; j++) {
			printf("%d ", matrixB[i][j]);
		}
		printf("]");
	}
	
	printf("\n\nMultiplicacao das Matrizes:");
	for (i = 0; i < m; i++) {
		printf("\n[");
		for (j = 0; j < p; j++) {
			for (k = 0; k < n; k++) {
				printf("%dx%d", matrixA[i][k], matrixB[k][j]); 
				if (k + 1 != n) {
				printf(" + ");
				}
			}
			if (j + 1 != p) {
				printf("   ");
			}
		}
		printf("]");
	}
	
	printf("\n\nMatriz Resultante:");
	for (i = 0; i < m; i++) {
		printf("\n[");
		for (j = 0; j < p; j++) {
			result = 0;
			for (k = 0; k < n; k++) {
				result = result + matrixA[i][k] * matrixB[k][j]; 
			}
			printf("%d", result);
			if (j + 1 != p) {
				printf(" ");
			}
		}
		printf("]");
	}
	
	return 0;
}

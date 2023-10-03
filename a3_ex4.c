#include <stdio.h> 

int main() {
	
	int i, j, n;
	int identity = 1;
	
	printf("Insira o tamanho da matrix quadrada... ");
	scanf("%u%*c", &n);
	
	int matrix[n][n];
	
	printf("Construindo sua matriz A... \n");
	for (i = 0; i < n; i++) {
		printf("\nInsira o numero na linha %u...\n", i + 1);
		for (j = 0; j < n; j++) {
		printf("Coluna %u: ", j + 1);
		scanf("%d%*c", &matrix[i][j]);
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("\n[ ");
		for (j = 0; j < n; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("]");
	}
	
	i = 0;
	while (i < n && identity == 1) {
		for (j = 0; j < n; j++) {
			if (i != j) {
				if (matrix[i][j] != 0) {
					identity = 0;
					break;
				}
			} else {
				if (matrix[i][j] != 1) {
					identity = 0;
					break;
				}
			}
		}
		i++;
	}
	
	if (identity) {
		printf("\n\nEssa matrix e identidade!");
	} else {
		printf("\n\nEssa matrix nao e identidade!");
	}
	
	return 0;
}


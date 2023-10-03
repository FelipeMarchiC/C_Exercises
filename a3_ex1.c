#include <stdio.h>

int main() {
	int i = 0, j = 0, k = 0; 
	
	int initial_vector[8] = { 0 };
	int positive_vector[8] = { 0 };
	int negative_vector[8] = { 0 };
	
	for (i = 0; i < 8; i++) {
		printf("\nInsert a number in the position %u on the vector... ", (i + 1));
		scanf("%d%*c", &initial_vector[i]);
		
		if (initial_vector[i] > 0) {
			positive_vector[j] = initial_vector[i];
			j++;
		} else {
			negative_vector[k] = initial_vector[i];
			k++;
		}
	}
	
	printf("\nInitial Vector: ");
	for (i = 0; i < 8; i++) {
		printf("%d ", initial_vector[i]);
	}
	
	printf("\nPositives: ");
	for (i = 0; i < j; i++) {
		printf("%d ", positive_vector[i]);
	}
	
	printf("\nNegatives: ");
	for (i = 0; i < k; i++) {
		printf("%d ", negative_vector[i]);
	}
	
	
	return 0;
}

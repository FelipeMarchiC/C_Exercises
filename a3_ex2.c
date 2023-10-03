#include <stdio.h>

int main() {
	int i = 0; 
	
	int vectorA[10] = { 0 };
	int vectorB[10] = { 0 };
	int vectorC[20] = { 0 };
	
	for (i = 0; i < 10; i++) {
		printf("\nInsert a number in the position %u on the A vector... ", (i + 1));
		scanf("%d%*c", &vectorA[i]);
		
		vectorC[i * 2] = vectorA[i];
	}
		
	for (i = 0; i < 10; i++) {
		printf("\nInsert a number in the position %u on the B vector... ", (i + 1));
		scanf("%d%*c", &vectorB[i]);
		
		
		vectorC[(i * 2) + 1] = vectorB[i];
	}
	
	printf("\nVector A: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", vectorA[i]);
	}
	
	printf("\nVector B: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", vectorB[i]);
	}
	
	printf("\nVector C: ");
	for (i = 0; i < 20; i++) {
		printf("%d ", vectorC[i]);
	}
	
	return 0;
}

#include <stdio.h>

int main() {
	int i = 2, j = 2, k, n1, n2, n3;
	
	printf("Insira seu numero inteiro: ");
	scanf("%d%*c", &n1);
	
	if (n1 == 0 || n1 == 1 || n1 == 2) {
		if (n1 == 0 || n1 == 1) {
			printf("Nao e numero primo! \n");
		} else {
			printf("%d e numero primo! \n", n1);
		}
	} 
	else {
		while (i < n1) {
			if (n1 % i == 0) {
				printf("Nao e numero primo! \n");
				break;
			}
			i++;
		}
		
		if (i == n1) {
		printf("%d e numero primo! \n", n1);
		}
	}
	
	
	printf("\nInsira seu numero inteiro: ");
	scanf("%d%*c", &n2);
	
	if (n1 == 0 || n1 == 1 || n1 == 2) {
		if (n1 == 0 || n1 == 1) {
			printf("Nao e numero primo! \n");
		} else {
			printf("%d e numero primo! \n", n1);
		}
	} 
	else {
		do {
			if (n2 % j == 0) {
				printf("Nao e numero primo! \n");
			    break;
			}
			j++;
		} while (j < n2);	
		
		if (j == n2) {
			printf("%d e numero primo! \n", n2);
		}
	
	}
	
	
	printf("\nInsira seu numero inteiro: ");
	scanf("%d%*c", &n3);
	
	if (n1 == 0 || n1 == 1 || n1 == 2) {
		if (n1 == 0 || n1 == 1) {
			printf("Nao e numero primo! \n");
		} else {
			printf("%d e numero primo! \n", n1);
		}
	} 
	else {
		for (k = 2; k < n3; k++) {
			if (n3 % k == 0) {
				printf("Nao e numero primo! \n");
				break;
			}
		}
		
		if (k == n3) {
			printf("%d e numero primo! \n", n3);
		}
	}
	
	return 0;
}

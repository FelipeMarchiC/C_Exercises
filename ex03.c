#include <stdio.h>

int main() {
	
	int i, j; 
	
	for (i = 1; i < 11; i++) {
		
		printf("\nTabuada do %u: \n", i);
		
		for (j = 1; j < 11; j++) {
			printf("%u x %u = %u \n", i, j, (i * j));
		}
	}
	
	return 0;
}

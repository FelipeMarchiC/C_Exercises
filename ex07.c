#include <stdio.h>

int main() {
	int i, fib1 = 0, fib2 = 1, fib3;
	
	for (i = 8; i >= 0; i--) {
		printf("%u \n", fib1);
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	
	return 0;
}

#include <stdio.h>

float func(int n, int d) {
	if (n == 1 && d == 1) {
		return 1;
	} else {
		return func(n - 1, d - 2) + ((float) n / d);
	}
}

int main() {
	int n = 10; 
	int d = 19;
	
	printf("Value: %f", func(n, d));
	
	return 0;
}

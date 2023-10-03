#include <stdio.h>

void somador(a, b) {
	printf("Soma: %u", a + b);
}

int main() {
	int a = 1, b = 2;
	somador(a, b);
	return 0;
}

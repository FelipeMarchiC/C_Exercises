#include <stdio.h>
#include <string.h>

void reversor(char str[], int ctg) {
	if (ctg == (strlen(str) / 2)) {
		ctg = 0;
	} else {
		char phold = str[0 + ctg];	
		
		str[0 + ctg] = str[strlen(str) - 1 - ctg];
		str[strlen(str) - 1 - ctg] = phold;
		ctg = ctg + 1;
		
		reversor(str, ctg);
	}
}

int main() {
	char string[30];
	int ctg = 0;
	
	printf("String: ");
	gets(string);
	
	reversor(string, ctg);
	printf("Inversa: %s", string);
	
	return 0;
}

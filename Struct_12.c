#include <stdio.h>

struct Conta {
	int numeroConta;
	float saldo;
	char titular[50];
};

struct Conta contaMaiorSaldo(struct Conta conta1, struct Conta conta2) {
	if (conta1.saldo > conta2.saldo) {
		return conta1;
	} else {
		return conta2;
	}
};

int main() {
	struct Conta conta1 = {123, 1000.50, "Joao"};
	struct Conta conta2 = {456, 500.25, "Maria"};
	
	struct Conta contaMaior = contaMaiorSaldo(conta1, conta2);
	
	printf("Conta com maior saldo:\n");
	printf("Numero: %d\n", contaMaior.numeroConta);
	printf("Titular: %s\n", contaMaior.titular);
	printf("Saldo: %.2f\n", contaMaior.saldo);
	
	return 0;
}

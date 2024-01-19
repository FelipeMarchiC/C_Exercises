#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compararInteiros(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int buscaSequencial(int vetor[], int tamanho, int key) {
	int i = 0, repeticoes = 0;
	for (i = 0; i < tamanho; i++) {
		repeticoes++;
		if (key == vetor[i]) {
			printf("Elemento existe no vetor!\n");
			return repeticoes;
		} else if (key < vetor[i] || repeticoes == tamanho) {
			printf("Elemento nao existe no vetor...\n");
			return repeticoes;
		}
	}
	
	return repeticoes;
}

int buscaBinaria(int vetor[], int tamanho, int key){
	int inicio = 0, fim = tamanho - 1, repeticoes = 0;
	
	while (inicio <= fim) {
		printf("Busca: %d a %d\n", inicio, fim);
		repeticoes++;
		
		int meio = inicio + (fim - inicio) / 2;
		
		if (vetor[meio] == key) {
			printf("\nElemento existe no vetor, posicao %d!\n", meio);
			return repeticoes;
		}
		if (vetor[meio] > key) {
			fim = meio - 1;
		} else {
			inicio = meio + 1;
		}
	}
	
	printf("\nElemento não existe no vetor...\n");
	return repeticoes;
}

int main() {
	srand(time(NULL));
	int tamanho = 100000;
	int vetor[tamanho], i;
	
	for (i = 0; i < tamanho; i++) {
		vetor[i] = rand() % 100001;
	}
	
	int key;
	printf("Digite o numero alvo: ");
	scanf("%d%*c", &key);
	
	qsort(vetor, tamanho, sizeof(int), compararInteiros);
	
	printf("\nBusca Sequencial:\n");
	int repeticoesSequencial = buscaSequencial(vetor, tamanho, key);
	printf("N de Vezes: %u\n", repeticoesSequencial);
	
	printf("\n\nBusca Binaria:\n");
	int repeticoesBinaria = buscaBinaria(vetor, tamanho, key);
	printf("N de vezes: %u", repeticoesBinaria);
	
}

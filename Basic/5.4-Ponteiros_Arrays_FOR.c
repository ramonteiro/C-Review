#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[5] = {1, 2, 5, 3, 10};
	int *p_vet, i;

	p_vet = vet; /* não precisa colocar &vet pois o array também aponta para uma posição (a do primeiro índice); */

	printf("Somente a partir do ponteiro, os números do array na memória são:\n");
	for (i=0; i<5; i++) {
		printf("%d \n", *(p_vet+i));
	}
	return 0;
}
#include <stdio.h>

int main() {
	int x;

	do { /* Executa obrigatoriamente uma vez o bloco */
		printf("Digite 1 ou 2, apenas.\n");
		scanf("%d", &x);
	} /* Encerra o bloco do */
	while (x < 1 || x > 2); /* while em linha simples com a relação
	de repetição. */
	return 0;
}
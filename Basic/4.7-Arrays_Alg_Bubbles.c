#include <stdio.h>
#include <stdlib.h>

int execucao(int limite_f);

int main() {
	int limite_usr;

    system("clear"); /* Preciso verificar um script multiplataforma. Este só funciona em sistemas POSIX. */
	printf("=== Algoritmo Bubblesort ===\n");
	printf("============================\n");
	printf("\n\n");
	printf("Quantos números vocë quer ordenar?\n");
	scanf("%d", &limite_usr);
	execucao(limite_usr);
	return 0;
}

int execucao(int limite_f) {
	int i, j, aux;
	int limite = limite_f;
	int n[limite];

	for (i = 0; i < limite; i++) {
		printf("Digite o %d° número:\n", i+1);
		scanf("%d", &n[i]);
	}
	i = 0;
	printf("Os números digitados foram:\n");
	for (i = 0; i < limite; i++) {
		printf("%d ", n[i]);
	}
	printf("\n");
	for (i = 1; i < limite; i++) { /* Garante que o número de comparações será o suficiente, isto é, limite-1 */
		for (j = 0; j < (limite-1); j++) { /* O vetor começa em n[0] e vai até n[limite-1] */
			if (n[j] > n[j+1]) {
				aux = n[j]; /* Se o número anterior (dentro da ordem do vetor) for menor, o aux funciona como 
				apoio para troca com o seguinte*/
				n[j] = n[j+1];
				n[j+1] = aux;
			}
		}
	}
	printf("\n");
	printf("Os números digitados anteriormente em ordem:\n");
	for (i = 0; i < limite; i++) {
		printf("%d ", n[i]);
	}
	printf("\n\n");
	return 0;
}
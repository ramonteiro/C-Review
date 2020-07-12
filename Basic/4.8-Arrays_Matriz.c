#include <stdio.h>
#include <stdlib.h>

/* Escrito com duas funções. A main() para receber a quantidade de provas e alunos e a execucao() para
receber esses parâmetros por VALOR e exibir uma matriz no fim com matrículas e notas */

int execucao(int a, int b);

int main() {
	int linha, coluna;
	
	system("clear");
	printf("========================\n");
	printf("=== Cadastro de notas ===\n");
	printf("\nNúmero de provas e matrículas a seu critério.\n\n");

	printf("Digite o número de alunos:\n");
	scanf("%d", &linha);
	printf("Digite o número de provas:\n");
	scanf("%d", &coluna);
	
	execucao(linha, coluna);
	return 0;
}

int execucao(int a, int b) {
	int x, y;
	int l = a;
	int c = b+1; /* Uma coluna é para matrículas. Adicionar mais uma senão haverá uma prova a menos do pedido 
	pelo usuário */
	float matriz[l][c]; 
	char nome[20]; /* Versão futura com nome dos alunos. */

	for (x = 0; x < l; x++) {
		for (y = 0; y < c; y++) {
			if (y == 0) {
				printf("Digite a matrícula do %d° aluno:\n", x+1);
				scanf("%f", &matriz[x][y]);
			}
			else {
			printf("Digite a %dª nota do %d° aluno:\n", y, x+1);
			scanf("%f", &matriz[x][y]);
			}
		}
	}
	system("clear");
	printf("As notas lançadas foram:\n");
	printf("Mat\n");
	
	for (x = 0; x < l; x++) {
		for (y = 0; y < c; y++) {
			if (y == 0) {
				printf("%.0f  ", matriz[x][y]); /* Exibir a matrícula sem casa decimal */
			}
			else {
			printf("%2.1f  ", matriz[x][y]);
			}
		}
		printf("\n\n");
	}
	return 0;
}

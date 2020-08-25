#include <stdio.h>

/* Leitura de dados em TXT em várias linhas, com o detalhe que tudo será atribuido a um vetor char[],
isto é, uma string. */

int main() {
	FILE *arquivo;
	char captura[200];

	arquivo = fopen("relatorio.txt", "r");

	if (arquivo == NULL) {
		printf("Não foi possível abrir o arquivo.\n");
		return 0;
	}

/* WHILE com a função fgets, que captura todos os dados como strings. Caso os tipos de dados fossem 
formatados e conhecidos na ordem, poderia ser usado fscanf() pois permite identificar inteiros, floats, etc.*/
	printf("O texto capturado foi:\n");
	while (fgets(captura, 200, arquivo) != NULL) {
		printf("%s\n", captura);
	}

	fclose(arquivo);
	return 0;
}
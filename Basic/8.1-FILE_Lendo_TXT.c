#include <stdio.h>

int main() {
/* Declaradno arquivo FILE (caixa alta) como ponteiro. */
	FILE *arquivo;
/* Declarando variáveis a quem serão atribuidas as leituras mais abaixo no arquivo. */
	char palavra[6];
	int x, y, z;

/* Função fopen com o argumento r de read. relatório.txt está no diretório do programa. */
	arquivo = fopen("relatorio.txt", "r");

	if (arquivo == NULL) {
		printf("Arquivo não encontrado.\n");
		return 0;
	}
	else {
		fscanf(arquivo, "%s %d %d %d", palavra, &x, &y , &z);
		printf("Foi lido no arquivo: %s, %d, %d, %d.\n", palavra, x, y, z);
	}

	fclose(arquivo);

	return 0;

}
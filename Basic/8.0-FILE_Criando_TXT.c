#include <stdio.h>

int main() {
	FILE *arquivo; 
	/* declarado o ponteiro do tipo FILE (caixa alta, case-sensitive) */


	arquivo = fopen("relatorio.txt", "w");
	fprintf(arquivo, "Relatório: teste 1 2 3.\n\nNova linha.");
	fclose(arquivo);

	return 0;


}
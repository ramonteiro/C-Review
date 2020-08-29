#include <stdio.h>

int main() {
	FILE *arquivo;
	char entrada[100];



	arquivo = fopen("relatorio.txt", "a");

	/* Verificando o apontamento do ponteiro arquivo. */
	arquivo == NULL ? printf("Arquivo de texto não encontrado.\n") : printf("Arquivo encontrado.\n");

		printf("Digite o texto que quer inserir (limite 100 caracteres):\n");
		fgets(entrada, 100, stdin);
	
		fprintf(arquivo, "%s", entrada);
		fclose(arquivo);

		/* fputs(string, arquivo); e fputc(caractere, arquivo); são equivalentes ao fprintf. */

	return 0;

}


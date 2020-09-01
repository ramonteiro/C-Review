/* Limpeza de Buffer na maneira multiplataforma e mais eficaz. */

#include <stdio.h>

/* Declara uma função que será a que limpará o buffer de entrada ao longo do código. */

void limp(void);

int main() {
	char carac;

	printf("Digite uma string:\n");
	scanf("%c", &carac);
	limp();

	return 0;
}

/* Função definida a ser usada ao longo das aberturas do buffer. */
void limp(void) {
	char c;

	while ((c = getchar()) != '\n' && (c != EOF)) {
	}
}


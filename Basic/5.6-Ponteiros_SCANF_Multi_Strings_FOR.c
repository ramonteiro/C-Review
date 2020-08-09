#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Algoritmo para imprimir o resto da string após o primeiro
espaço encontrado nela. */

int main() {
	char string[30];
	char *point;
	int i;

	printf("Digite uma frase:\n");
	scanf("%30[^\n]s", string); /* formato para scan da string que na verdade
	é um array com 30 índices, até a primeira quebra de linha (caso contrário
	só captura a primeira palavra antes do espaço com %s.) */

	printf("Foi atribuida a string %s à variável.\n", string);

	printf("Buscando o caractere espaço para alterar o endereço do ponteiro:\n");
	for (i=0;string[i] && string[i] != ' '; i++) {
		point = &string[i+1]; /* No exemplo original no canal WR Kits era
		somente &string[i] mas não dava certo. */
	}
	
	printf("%s", point);
	printf("\n\n");
	return 0;
}
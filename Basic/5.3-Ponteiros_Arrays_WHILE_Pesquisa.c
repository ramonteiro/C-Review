#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /* Permite o tolower() toupper() */

int main() {
	char vet[6], *point, x;
	int loc;
	int i = 0;

	printf("Digite seis caracteres quaisquer para compor uma lista:\n");
	scanf("%s", vet);
	getchar(); /* Limpar buffer do teclado */

	point = vet; /* Point não recebe o valor do vetor,
	pois não é uma var comum e sim ponteiro. É maneira correta de 
	se vincular ponteiro a var não precisa colocar &variavel. */

	printf("Digite o caracter a pesquisar na lista:\n");
	scanf("%c", &x);
	getchar();

	while(*point) { /* Maneira simplificada de coletar itens no array*/
		if (x == *point) {
			loc = i+1;
			printf("O caractere é o %d° da lista.\n", loc);
		}
		point++;
		i++;
	}
	printf("\n\n");
	return 0;
}
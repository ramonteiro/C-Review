#include <stdio.h>


int main() {

/* Declaração e definição da Struct para um haras. */

	struct cavalos {
		char nascimento[20];
		char raca[50];
		int codigo;
		int baia;
	};

	struct cavalos adolfo, pablo, teo;

/* Declaração e definição do ponteiro. */
	struct cavalos *ponteiro; 
	ponteiro = &adolfo;

/* Agora o ponteiro point1 apopnta para o endereço de adolfo, ambos na mesma struct. Como qualquer ponteiro,
é possível alterar valores do dono do endereço, pelo ponteiro que aponta para este. Útil em códigos
com muitas structs, funções e arrays, onde o ponteiro facilita/viabiliza as transicões. */

	(*ponteiro).codigo = 1291;
	(*ponteiro).baia = 8;
	printf("Alterado no ponteiro. Vejamos na variável apontada:\n");
	printf("Cavalo do dono: %d.\nBaia %d.\n", adolfo.codigo, adolfo.baia);

	printf("Outra sintaxe de alterar o ponteiro!\n");
	ponteiro->codigo = 4231;
	ponteiro->baia = 12;
	printf("Alterado no ponteiro. Vejamos na variável apontada:\n");
	printf("Cavalo do dono: %d.\nBaia %d.\n", adolfo.codigo, adolfo.baia);	

	return 0;
}


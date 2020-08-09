/* Exemplo simples de implementação da Estrutura de Dados FILA em C */
#include <stdio.h>

int main() {


/* Definição da Struct com um inteiro e um ponteiro. Notar a sintaxe do ponteiro subdefinido. */
	struct lista {
		int id;
		struct lista *proximo; 
	};

/* Declação das Structs e definição logo embaixo. */
	struct lista l1, l2, l3, l4, l5; 

	l1.id = 10;
	l2.id = 20;
	l3.id = 30;
	l4.id = 40;
	l5.id = 50;

/* Declaração e definição do esquema de apontamento, com um ponteiro *primeiro declarado para apontar
para o endereço da primeira struct (l1). Notar que o último (l5) aponta para um nulo 0. */
	struct lista *primeiro = &l1;
	l1.proximo = &l2;
	l2.proximo = &l3;
	l3.proximo = &l4;
	l4.proximo = &l5;
	l5.proximo = (struct lista *)0; 

/* WHILE delimitado pelo *primeiro até apontar para o endereço que aponta l5 (null). Notar a sintaxe
do argumento while e de ponteiro de Struct (primeiro->id para printf) e (primeiro=primeiro->proximo 
como sendo o incremento.) */

	while (primeiro != (struct lista *)0) {
		printf("%d\n", primeiro->id);
		primeiro = primeiro -> proximo;
	}
	getchar();
	return 0;
}





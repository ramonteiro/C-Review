/* Verificar a alocação de memória de forma simplificada para um 
ponteiro definido */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;

/* malloc() retorna um ponteiro que indica o local na memória para 
a Qnt dado informada, sizeof() pode ser customizado com o tipo de dado
int char etc ou o nome da var/ponteiro. */

	p = malloc(sizeof(*p));
	if (p == NULL) {
		printf("A alocação de memória não funcionou.\n");
	}
	/* Poderia ser malloc(sizeof(int)) ou malloc(sizeof(4)). */

	*p = 40000000000;
	printf("Valor atribuído acima do tamanho máximo de int: %d\n", *p);
	/* Função realloc() permite aumentar ou diminuir o espaço
alocado para o ponteiro. */
	
	/* Alterando o espaço em memória do sizeof int (4bytes) para 
2*(8bytes) com a função REALLOC() */ 

	long *q;
	q = realloc(p, 2*sizeof(int));
	*q = 40000000000000;
	
	printf("Após a função realloc *p: %li\n", *q);

	return 0;

}
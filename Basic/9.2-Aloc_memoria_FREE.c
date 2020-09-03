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

	*p = 1000;
	printf("Após aloc memória *p aponta para o valor: %d\n", *p);
	/* Função free() desaloca a memória alocada para o argumento,
	mas APAGA o conteúdo. */
	free(p); 
	/* O dado permaneceu na memória desalocada. */
	printf("Após a função free *p: %d\n", *p);

	return 0;

}
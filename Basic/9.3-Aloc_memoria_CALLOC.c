/* Verificar a alocação de memória de forma simplificada para um 
ponteiro definido com a função CALLOC*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;

/* calloc() retorna um ponteiro void que aloca o local na memória para 
a Qnt dado informada, sizeof() pode ser customizado com o tipo de dado
int char etc ou o nome da var/ponteiro. */

	printf("Conteúdo do alvo do ponteiro antes da qualquer alocação: %d\n", *p);

	/* Pede-se para alocar três blocos de memória do sizrof *p, isto é
	3x4=12 byts. */
	p = calloc(3, sizeof(*p));
	if (p == NULL) {
		printf("A alocação de memória não funcionou.\n");
	}

	*p = 1000;
	printf("Após aloc memória *p com CALLOC, tem-se o valor: %d na memória.\n", *p);

	*(p+1) = 1050;
	printf("No bloco 2 dos 3 alocados com CALLOC, atribui-se o valor: %d.\n", *(p+1));
	
	return 0;

}
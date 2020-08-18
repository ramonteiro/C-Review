/* Estrutura de dados do tipo Lista (encadeada) */
#include <stdio.h>
#include <stdlib.h>

/* celula será uma alias para a struct Lista. Muito usado.*/
struct Lista {
	int elemento;
	struct Lista *prox;
};

typedef struct Lista celula;

/* Protótipos de funções.*/ 
/* insereH() tem um argumento celula (struct lista). e
**topo, que tem 2 asteriscos pois aponta para outro ponteiro */
void insereH(celula **topo, int ele);

void imprimir(celula *topo);
	
int main() {
	
/* Define struct lista (ver prototipo) tipo ponteiro. */
	celula *topo = NULL;

	insereH(&topo, 3);
	insereH(&topo, 6);
	insereH(&topo, 9);
	insereH(&topo, 12);
	printf("Lista encadeada:\n");
	imprimir(topo);
	printf("\n");

}

/* Definição das funções auxiliares. */ 
void insereH(celula **topo, int ele) {	
	celula *novo;
	novo = malloc(sizeof(celula));
	novo->elemento = ele;
	if(*topo == NULL) {
		novo->prox = NULL;
		*topo = novo;
	}
	else {
		novo->prox = *topo;
		*topo = novo;
	}
}

void imprimir(celula *topo) {
	celula *aux;
	aux = topo;
	if (aux == NULL) {

	} 
	else {
		do {
			printf("%d->", aux->elemento);
			aux = aux->prox;
		} while(aux!=NULL);
	}
}



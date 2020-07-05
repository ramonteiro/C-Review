#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ncurses.h>
#include <curses.h>

/* Visualizar a passagem de parâmetro por REFERÊNCIA. Significa que a variável é alterada na sua localização
na memória. Detalhes para atentar: o argumento com * na função, e passagem das variáveis para a função com o &, 
que significa que não é o valor, e sim o local na memória, que permite a alteração definitiva. Quando a pasasgem
é por VALOR, o argumento passado é sem *, somente o valor realmente é operado pela função */

int quadrado_ref(int *x);

int main() {
	int numero; 
	char enter;

	printf("Digite um número:"); 
	scanf("%d", &numero); 
	printf("O número digitado foi %d que o ocupa a memória na posição %p\n", numero, &numero); 	
	printf("Passando a variável por referência à localização dela na memória para a função.\n\n");
	quadrado_ref(&numero);
	printf("A variável foi alterada para %d. Houve passagem por referência na posição %p.\n", numero, &numero); 
	return  0;
}

int quadrado_ref(int *x) {
	*x = pow(*x, 2);
	return *x;
}





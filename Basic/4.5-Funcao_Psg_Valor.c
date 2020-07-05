#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadrado_ref(int x);

int main() {
	int numero;

	printf("Digite um número:"); 
	scanf("%d", &numero); 
	printf("O número digitado foi %d\n", numero); 
	printf("Passando a variável por valor para a função. Não há alteração no valor registrado na memória.\n");
	printf("A variável com valor %d está alocada na posição %p\n", numero, &numero);
	printf("O Retorno da função que recebeu somente o valor %d é %d.\n\n", numero, quadrado_ref(numero));
	return  0;
}

int quadrado_ref(int x) {
	x = pow(x, 2);
	return x;
}
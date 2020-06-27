/* Revisão de sintaxe e expressões aritméticas simples. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c, d;
	int n = 4;
	printf("Teste operação falsa, bit: %d\n", 3>5);	
	printf("Teste operação verdadeira, bit: %d\n\n", 3<5);
	printf("Teste verdadeiro com qualquer valor, bit: %d\n\n\n", n);

	printf("Digite dois valores, e.g.: 7 8\n\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	d = pow(c, 2);
	printf("A soma é %d, e o quadrado de %d é %d.\n\n", c, c, d);
	return 0;
}
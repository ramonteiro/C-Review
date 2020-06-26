#include <stdio.h>

/* Quando há a necessidade de manter var em certos tipos,  eg int, e 
obter um resultado, eg float, quando operá-las, usa-se o casting */


int main() {
	int x;
	int y;
	float razao;

	printf("Digite x:\n");
	scanf("%d", &x);

	printf("Digite y:\n");
	scanf("%d", &y);

	razao = x/y;
	printf("Operacão de razão sem casting: %f\n", razao);

	razao = (float)x/y;
	printf("Operação de razão com casting: %f\n", razao);

	return 0;
}
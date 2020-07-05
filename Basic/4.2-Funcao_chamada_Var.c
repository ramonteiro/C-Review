#include <stdio.h>


int define_var(int a);
int main() {

	int x, y, soma;
	x = define_var(x);
	y = define_var(y);
	soma = x+y;
	printf("A soma é %d\n", soma);
}

int define_var(int a) {
	int z;
	printf("Digite um número:\n");
	scanf("%d", &z);
	printf("Você digitou %d\n", z);
	return z;
}
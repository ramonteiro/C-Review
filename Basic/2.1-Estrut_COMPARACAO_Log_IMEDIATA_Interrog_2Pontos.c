#include <stdio.h>

/* Uso do operador ? : como condicional imediato. Muito prático. */

int main() {
	int x, y;
	int maior;

	printf("Digite dois números: (eg: 9 3):\n\n");
	scanf("%d %d", &x, &y);
	x > y ? (maior = x) : (maior = y);
	printf("%d é o maior.\n", maior);

	printf("Digite outros dois números: (eg: 9 3):\n\n");
	scanf("%d %d", &x, &y);
	x > y ? printf("%d é o maior.\n", x) : printf("%d é o maior.\n", y);

	return 0;
}
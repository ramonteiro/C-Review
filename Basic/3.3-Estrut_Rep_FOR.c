#include <stdio.h>

int main() {

	int contador, n;

	printf("Digite até quanto desejar a contagem:");
	scanf("%d", &n);
	for (contador = 1; contador <= n; contador++) {
		printf("%d\n", contador);
	}
}
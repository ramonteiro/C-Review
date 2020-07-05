#include <stdio.h>

int ponteiro_altera_var(int *x);

int main() {
	int y = 10;
	int *y_pont;
	y_pont = &y;
	
	printf("\nO valor y antes de ser argumento da função é %d.\n", y);
	ponteiro_altera_var(y_pont);
	printf("O valor de y após ser argumento da função é %d.\n", y);
}

int ponteiro_altera_var(int *x) {
	*x = 12;
	printf("\nA função atribui ao argumento a ela designado o valor %d.\n", *x);
	return 0;
}
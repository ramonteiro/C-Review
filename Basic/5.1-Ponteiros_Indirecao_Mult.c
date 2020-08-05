#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int *point1; /* pointer na literatura en */
	int **point2;
	int ***point3;

	system("CLEAR");
	printf("Digite um valor inteiro:\n");
	scanf("%d", &n);
	printf("\nO valor %d digitado está na variável n no endereço: %p\n", n, &n);

	point1 = &n;
	printf("1. O endereço de n foi passado para o valor de point1: %p \n", point1); /* O conteúdo ponteiro é o endereço da variável n conforme linha 14.*/
	printf("2. O endereço próprio de point1 é: %p\n\n", &point1); /* Mas o ponteiro também possui um endereço próprio. Para fins de distinção. */
	printf("3. O valor que está no apontamento de point1 é: %d\n", *point1); /* printf com o formato inteiro %d com o argumento sendo o ponteiro com * permite 
	revelar o conteúdo da variável apontada. Interessante, pois não se trata apenas de endereço. */

	point2 = &point1;
	printf("4. O endereço de pont1 foi passado para o valor de point2: %p\n", point2);
	printf("5. O endereço próprio de point2 é: %p\n", &point2);
	printf("6. O valor indicado por point2, após APONTAR para point1 que APONTA para a var n é: %d\n", **point2);

	point3 = &point2;
	printf("\nÚltimo teste, com uma terceira indireção. point3 foi atribuído como ponteiro para point2.\n");
	printf("7. O conteúdo de point3 é: %p. O endereço de point2 é: %p.\n", point3, &point2);
	printf("8. O valor que point3 está apontando, após duas indireções é: %d. \n", ***point3);
	return 0;

}
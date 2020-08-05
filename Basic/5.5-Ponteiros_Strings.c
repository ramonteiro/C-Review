#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

int main() {
	char frase[50];
	char *point;
	int i = 2;
	int *point2;

	printf("Digite uma frase para ser a string:\n");
	scanf("%50[^\n]s", frase); /* Capturar 50 caracteres até a nova linha,
	ou enter/return */

	point = frase;
	printf("\nPoint1:\n");
	printf("1. A string tem o endereço: %p.\n", &frase);
	printf("2. O ponteiro aponta para a string: %s\n", point);
	/* Notar que abaixo as duas sintaxes indicam o mesmo endereço.*/
	printf("3. O endereço que ele aponta é: %p.\n", point);
	printf("4. O endereço que ele aponta é (outra sintaxe): %p.\n", &*point);
	printf("\n\n5. O endereço dele próprio é: %p.\n", &point);

	point2 = &i;
	printf("\nPoint2:\n");
	printf("6. A variável inteiro tem o endereço: %p.\n", &i);
	printf("7. O endereço que o ponteiro aponta é: %p.\n", point2);
	printf("8. O ponteiro aponta para o inteiro %d.\n", *point2);
	printf("9. O endereço dele próprio é: %p.\n", &point2);
	
	return 0;
}
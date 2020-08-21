/* Pre-processamento do programa: #include, #define, declarações funçöes */
#include <stdio.h> /* incluiras bibliotecas de cabeçalho (header .h) */
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

/* MACROS (nome em caixa alta por convenção) que valem para todo o 
código. Ideal para operações que não justifiquem criar funcões.*/
#define PI 3.14
#define  MAIOR(x, y) x > y ? x : y 
#define MINUSCULO(b) ((b >= 'a') && (b <= 'z'))

int main() {
	char letra;
	int num1, num2;

	do {
		printf("Digite uma letra minúscula: (S para sair)\n");
		scanf( " %c", &letra);
		getchar();

		if (MINUSCULO(letra)) { /* similar a uma função, mas é
			um MACRO */
			printf("Ok. %c é minúsculo.\n", letra);
		}
		else {
			printf("Erro. %c não é minúsculo.\n", letra);
		}
	} while(letra != 's');

	printf("Usando MACRO. Digite dois números quaisquer: (eg: 4 9)\n");
	scanf("%d %d",&num1, &num2);
	printf("%d é o maior dos dois.\n", MAIOR(num1, num2));

	return 0;
}


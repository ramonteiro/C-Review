/* Programa para somar de dois números desde que os dois sejam primos */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Variável Global válida para todas as funções do código.
A idéia é 'romper'o while da main(), com uma 
operação na check_primo()  */
int check_flag = 0;

/* Protótipo (Declaração) da função.= check_primo */
int check_primo(int k); 

int main() {
	int i;
	int soma = 0;
	int n[3];

	for (i=1; i<3; i++) {
		while (check_flag == 0) {
			printf("Digite um número primo:");
			scanf("%d", &n[i]);
			check_primo(n[i]);
		}
			soma = n[i] + soma;
			check_flag = 0;
	}
	printf("\n\n");
	printf("O resultado da soma dos dois números primos é %d.\n", soma);
	return 0;
}

/* Definição da função check_primo */
int check_primo(int k) {
	int check_flag_f = 0;

		while (check_flag_f == 0) {		
			if ((k%2 != 0) && (k%3 != 0) && (k%5 != 0) && (k%7 != 0)) {
				check_flag = 1;
				check_flag_f = 1;
				printf("Sucesso. %d é um número primo.\n", k);
			}
			else {
				printf("%d não é primo. Digite novamente um número primo.\n", k);
				check_flag_f = 1;
			}
		}
	return 0;
}
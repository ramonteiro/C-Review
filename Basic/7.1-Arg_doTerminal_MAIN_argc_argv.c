#include <stdio.h>

/* Verificar a inclusão dos argumentos argc e argv de main() no prompt antes de iniciar o programa*/

/* Permite obter outputs no terminal com argumentos de interesse, após rodar o código com eles.*/

int main(int argc, char *argv[]) {
	int x, y, produto;

	/* os argv[1] e argv[2] foram passados junto com o comando do programa e argv[0] é o nome dele. argc 
armazena a qnt de int. atoi() permite transformar os char argv[1] e [2] em int. */

	x = atoi(argv[1]); 
	y = atoi(argv[2]);
	produto = x*y;
	// produto = x*y;
	printf("\n\nEste é a string na posição 0 do vetor argv: %s\n", argv[0]);
	printf("Os argumentos lidos na função main() foram %d e %d.\n", x, y);
	printf("O produto deles é %d.\n", produto);

	return 0;
}
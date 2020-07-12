#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

/* Código rascunho para aprender um DESEJA CONTINUAR com strings,
que não funcionam com o operador == e sim com strcmp previsto no header
string.h */

int main() {
	char nome[20], sobrenome[30];
	char resposta_continua[1];
	int resposta_cmp = 1;
	
	while (resposta_cmp==1) {
		printf("Digite o nome:\n");
		scanf("%s", nome);

		printf("Digite o sobrenome:\n");
		scanf("%s", sobrenome);
		getchar(); /* Limpeza de buffer do teclado */

		strcat(nome, " "); /* acrescenta um espaço no último caractere.*/
		strcat(nome, sobrenome);

		printf("Nome agora é: %s\n", nome);
		printf("Sobrenome agora é: %s\n", sobrenome); /* Só muda a 
		primeira string do strcat. */

		printf("Deseja continuar? (S/N)\n");
		scanf("%s", resposta_continua);
		getchar();

		if(strcmp(resposta_continua, "S") != 0)
			resposta_cmp=0;
			/* break; Uso do break com a condição de interrupção do loop.*/
	} 
	return 0;
}

// A opção oriignal do loop está abaixo. Achei o uso do break mais elegante.//
// do {
// 		printf("Digite o nome:\n");
// 		scanf("%s", nome);

// 		printf("Digite o sobrenome:\n");
// 		scanf("%s", sobrenome);
// 		getchar(); /* Limpeza de buffer do teclado */

// 		strcat(nome, " "); /* acrescenta um espaço no último caractere.*/
// 		strcat(nome, sobrenome);

// 		printf("Nome agora é: %s\n", nome);
// 		printf("Sobrenome agora é: %s\n", sobrenome); /* Só muda a 
// 		primeira string do strcat. */

// 		printf("Deseja continuar? (S/N)\n");
// 		scanf("%s", resposta_continua);
// 		getchar();

// 		if(strcmp(resposta_continua, "S") == 0)
// 			break;
// 			/* resposta_cmp = 0; */
// 	} while (resposta_cmp == 0);

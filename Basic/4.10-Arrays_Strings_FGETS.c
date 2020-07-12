#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char fullname[100];

	printf("Digite o seu nome completo:\n");
	// scanf("%100[^\n]", fullname); //* Opção nativa.
	fgets(fullname, 50, stdin); //* Opção mais segura e elegante.

	printf("Nome registrado: %s\n", fullname);
}
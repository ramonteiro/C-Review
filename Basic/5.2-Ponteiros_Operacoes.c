#include <stdio.h>

int main() {
	char *point1;

	
	printf("Endereço APONTADO pelo do point1: %p.\n", point1);

	*point1++; /* O incremento ou redução em bytes depende do 
	tipo do ponteiro declarado */

	printf("Endereço incrementado em +2 bytes APONTADO pelo do point1: %p.\n", point1);
	return 0;
}
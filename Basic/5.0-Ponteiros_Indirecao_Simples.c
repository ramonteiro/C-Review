#include <stdio.h>


int main() {
	int numero1, numero2;
	int *ponteiro; /* O tipo é da variável que será apontada, e 
	não do ponteiro em si, que é um endereço. */

	system("clear");
	printf("Digite um número:\n");
	scanf("%d", &numero1);
	printf("\n\n");
	printf("1. O número digitado foi %d. Ele está na posição de memória %p\n\n", numero1, &numero1);
	
	printf("2. O ponteiro sem receber a posição da variável acima está na posição %p.\n\n", &ponteiro);
	ponteiro = &numero1; /* Sem o *. ponteiro recebe o endereço da var
	numero1. */

	printf("3. O ponteiro recebeu o endereço da variável. O valor que ele possui armazenado em si é %p\n", ponteiro);
	printf("4. Agora o valor %d está alocado na posição de memória: %p. O endereço original da variável é %p.\n\n", *ponteiro, ponteiro, &numero1);
	printf("5. O valor que está apontado no ponteiro será atribuído a outra variável:\n");
	
	numero2 = *ponteiro; /* A var numero2 recebe o VALOR da variável
	apontada pelo *ponteiro (nesse caso com *) */
	printf("6. A segunda variável tem o valor de %d e o endereço %p\n", numero2, &numero2);
	printf("\n");
	return 0;
}
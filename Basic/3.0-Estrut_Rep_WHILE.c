#include <stdio.h>
#include <stdlib.h>

int main()
{
	int contador = 1;
	int limite;
	float peso, altura, imc;

	printf("Digite quantas vezes você desejar executar a avaliação:\n");
	scanf("%d", &limite);

	while (contador <= limite) {
		printf("Digite o peso da pessoa número %d:\n", contador);
		scanf("%f", &peso);
		printf("Digite a altura da pessoa número %d:\n", contador);
		scanf("%f", &altura);
		imc = peso/(altura*altura);
		printf("O IMC da pessoa número %d é %.1f\n", contador, imc);
		contador++;
	}
}
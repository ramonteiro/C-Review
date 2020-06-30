#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int contador, limite, continua1;
	float parcial, media;
	int total = 0;
	char nome[20];
	char continua;

	printf("============================================\n");
	printf("		Cálculo de notas 1.0                \n");
	printf("============================================\n\n");
	
	continua = 'S'; /* CHAR é definido por aspas simples */
	while (continua == 'S') {
		total = 0;
		printf("Digite o nome do aluno:\n");
		scanf("%s", &nome);
		printf("Digite o número total de provas realizadas: \n");
		scanf("%d", &limite);
		for (contador = 1; contador <= limite; contador++) {
			printf("Digite a %dª nota:\n", contador);
			scanf("%f", &parcial);
			total = parcial + total;
		}
		media = total/limite;
		printf("A média das %d provas do aluno %s foi %.2f.\n", limite, nome, media);
		printf("Deseja prosseguir para o próximo? (S/N)\n");
		scanf(" %c", &continua); /* O espaço para o %c é necessário quando é caractere */
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, limite;
	int total = 0;
	int contador = 1;
	int continua = 1;
	float media;

	while (continua == 1) {
		contador = 1;
		total = 0;
		printf("Quantos números você deseja calcular a média?\n");
		scanf("%d", &limite);
		while (contador <= limite) {
			printf("Digite o %d° número:\n", contador);
			scanf("%d", &n);
			total = n + total;
			contador++;
		}
		media = total/limite;
		printf("A média dos %d números digitados foi %.2f.\n\n", limite, media);
		printf("Deseja continuar? (1-Sim, 0-Não)\n");
		scanf("%d", &continua);
	}
		return 0;
}
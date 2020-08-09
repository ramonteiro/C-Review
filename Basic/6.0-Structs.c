#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* Diferente de arrays, permite agrupar tipos de dados diferentes */
	struct aeronave {
		char modelo[20];
		float tsn_cel;
		float tsn_m1;
		float tsn_m2;
		char status[20];
		char obs[50];
	};

	struct aeronave EB3001;
	// EB3001.modelo = "HM-2";

	// while (continua == 'S' || continua == 's') Para teste futuro.
	// printf("Digite a aeronave a ser cadastrada: (Exemplo EB3002)\n");
	// scanf("%s", aux_modelo);
	// getchar();
	// struct aeronave aux_modelo;
	// printf("Digite o TSN de célula da aeronave %s:\n", aux_modelo);
	// scanf("%f", &aux_modelo.tsn_cel);
	// printf("Digite o TSN do motor n° 1 da aeronave %s:\n", aux_modelo);
	// scanf("%f", &aux_modelo.tsn_m1);
	// printf("Digite o TSN do motor n° 2 da aeronave %s:\n", aux modelo);
	// scanf("%f", &aux_modelo.tsn_m2);
	// printf("Digite o status aeronave %s: (DISPONÍVEL/INDISPONÍVEL)\n"), aux_modelo;
	// scanf("%s", aux_modelo.status);
	// printf("Digite alguma observação sobre o status da aeronave %s:\n", aux_modelo);
	// getchar();
	// scanf("%30[^\n]", aux_modelo.obs);

	printf("Digite o TSN de célula da aeronave EB3001:\n");
	scanf("%f", &EB3001.tsn_cel);
	printf("Digite o TSN do motor n° 1 da aeronave EB3001:\n");
	scanf("%f", &EB3001.tsn_m1);
	printf("Digite o TSN do motor n° 2 da aeronave EB3001:\n");
	scanf("%f", &EB3001.tsn_m2);
	printf("Digite o status aeronave EB3001: (DISPONÍVEL/INDISPONÍVEL)\n");
	scanf("%s", EB3001.status);
	printf("Digite alguma observação sobre o status da aeronave EB3001:\n");
	getchar();
	scanf("%30[^\n]", EB3001.obs);
	getchar(); /* Indispensável para limpar o buffer do teclado. No printf apresenta
	erro se não implementar essa função. */

	system("CLEAR");
	printf("## EB3001\n");
	printf("TSN célula: %.1f\n", EB3001.tsn_cel);
	printf("TSN GTM1: %.1f\n", EB3001.tsn_m1);
	printf("TSN GTM2: %.1f\n", EB3001.tsn_m2);
	printf("Status: %s\n", EB3001.status);
	printf("Obs: %s\n.", EB3001.obs);
	return 0;
}
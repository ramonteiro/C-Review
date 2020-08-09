#include <stdio.h>
#include <stdlib.h>


/* Struct padrão utilizada no programa, e definida globalmente */

struct horario {
		int hora;
		int minuto;
		int segundo;
};

// struct horario {
// 		int hora;
// 		int minuto;
// 		int segundo;
// };ultimo_reporte, novo_reporte; Outra forma de declarar, mas as var seriam globais também.


/* Declaração da função associada ao struct. Notar a sintaxe curiosa. */
struct horario altera(struct horario x);

int main(void) {

	struct horario ultimo_reporte; 
	
	ultimo_reporte.hora = 2;
	ultimo_reporte.minuto = 15;
	ultimo_reporte.segundo = 50;
	

	printf("Último reporte de localização:\n");
	printf("%d:%d:%d\n", ultimo_reporte.hora, ultimo_reporte.minuto, ultimo_reporte.segundo);

	struct horario novo_reporte = altera(ultimo_reporte);

	printf("Novo reporte de localização:\n");
	printf("%d:%d:%d\n", novo_reporte.hora, novo_reporte.minuto, novo_reporte.segundo);
	return 0;
}

/* Definição da função associada a struct. Sintaxe diferente de funções comuns. */
struct horario altera(struct horario x) {

	x.hora = 5;
	x.minuto = 30;
	x.segundo = 20;

	return x; /* Retorno típico de uma função simples de operação */
};

#include <stdio.h>

/* Utilizar Structs com um array como a variável. No caso, anv com 3 índices */

int main() {
	int i;

	struct aeronave {
		char modelo[8];
		int numeral;
		char unidade[10];
		char situacao[20];
	};

	struct aeronave anv[3] = {{"HM-2", 3002, "4BAVEX", "DISPONIVEL"}, 
							 {"HM-1", 2010, "2BAVEX", "INDISPONIVEL"}, 
							 {"HM-3", 4002, "3BAVEX", "DISPONIVEL"}};

	for (i=0; i<3; i++) {
		printf("%s  |  %d  |  %s  | %s  \n", anv[i].modelo, anv[i].numeral, anv[i].unidade, anv[i].situacao);
	}

	return 0;
}

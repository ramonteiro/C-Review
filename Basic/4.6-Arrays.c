#include <stdio.h>


int main() {
	int i = 1;
	int alunos[2];
	float notas[3];

	for (i = 1; i < 4; i++) {
		printf("Digite a %dª nota do aluno:\n", i);
		scanf("%f", &notas[i]);
	}
	for (i = 1; i < 4; i++) {
		printf("As notas lançadas foram:\n");
		printf("%dª nota: %.2f\n", i, notas[i]);
	}
	return 0;
}
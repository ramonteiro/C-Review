#include <stdio.h>
#include <stdlib.h>


int main() 
{
		float n1, n2, n3, media;
		char nome[30], sobrenome[40];
		
		printf("Aplicação para cálculo de média de disciplina a 3 notas:\n\n\n");
		printf("Digite o nome do discente:\n");
		scanf("%s %s", &nome, &sobrenome);
		printf("Digite a 1a nota do discente %s:\n", nome);
		scanf("%f", &n1);
		printf("Digite a 2a nota do discente %s:\n", nome);
		scanf("%f", &n2);
		printf("Digite a 3a nota do discente %s:\n", nome);
		scanf("%f", &n3);
		media = (n1+n2+n3)/3;
		printf("A média do discente %s foi %.2f.\n\n", nome, media);
		
		if (media >= 7) {
			printf("Discente %s %s está APROVADO.\n", nome, sobrenome);
		}
		else {
			if (media >= 5.0) {
				printf("Discente %s %s está em RECUPERAÇÃO.\n", nome, sobrenome);
			}
			else {
				printf("Discente %s %s está REPROVADO.\n", nome, sobrenome);
			}
		}
		/*
		Opção mais elegante, com menos identação.
		if (media >= 7) {
			printf("Discente %s %s está APROVADO.\n", nome, sobrenome);
		}
		else if (media >= 5.0) {
				printf("Discente %s %s está em RECUPERAÇÃO.\n", nome, sobrenome);
		}
		else {
			printf("Discente %s %s está REPROVADO.\n", nome, sobrenome);
		}
		*/
		
		return 0;
}


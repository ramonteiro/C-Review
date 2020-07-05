#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* setlocale(LC_ALL, ""); Habilitar acentos do português no
console, embora no terminal do mac não precisa. */ 

float calcula_imc(float f_peso, float f_altura);
int main() { 
	float peso, altura, imc;

	printf("Digite o peso:\n");
	scanf("%f", &peso);
	printf("\n");
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	imc = calcula_imc(peso, altura);
	printf("O IMC é %.2f\n", imc);
return 0;
}

float calcula_imc(float f_peso, float f_altura) {
	return f_peso/(f_altura*f_altura);
}

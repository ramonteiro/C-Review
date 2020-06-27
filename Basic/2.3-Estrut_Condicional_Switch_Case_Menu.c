#include <stdio.h>


int menu(void);
int english(void);
int portugues(void);
int espanol(void);



int main() {
	
	system("CLEAR");
	menu();
	return 0;
}

int menu() {
	int i;

	system("CLEAR");
	printf("For English (1)\nPara Português (2)\nPara Español (3)\n\n");
	scanf("%d", &i);

	switch (i) {
		case 1: system("CLEAR");
				english(); 
				break; 
		case 2: system("CLEAR");
				portugues();
				break;
		case 3: system("CLEAR");
				espanol();
				break;
		default: printf("Invalid.\n");
	}
	return 0;
}


int english(void) {
	int i;

		printf("Welcome to the English version of Switch Example Program.");
		printf("\n(1) Enter the data.\n (2) Back to the menu");
		scanf("%d", &i);

		switch (i) {
		case 1: printf("Enter the data part: (...)\n");
		case 2: menu();
		default: printf("Invalid.\n");
	/* Viria o código para a versão em inglês */
		}
	return 0;
}

int portugues(void) {

	printf("Bem-vindo à versão em português do programa.\n");
	return 0;
}

int espanol(void) {

	printf("Bienvenido à la version en español del programa.\n");
	return 0;
}
#include <stdio.h>
/* Para usar a função strcpy(), que atribui strings inteiras a um array. */
#include <string.h>

/* Declaração e definição de structs e funções para todo o programa */
struct lista {
	char nome[15];
	int valor;	
	struct lista *proximo;
};

	/* Declaração da Função-ponteiro formatada na struct lista acima definida. Notar a sintaxe curiosa. */
	/* Mesmo sendo uma função, a estrutura de dados é struct nome_struct *ponteiro e os argumentos em ().*/ 
struct lista *procura(struct lista *proc_struct_lista, int valor_procurado);

int main() {
	int valor_usuario;

	/* Declaração de structs tipo lista (l1,l2,l3) e dos ponteiros que pontam para structs *inicio e *resultado.*/
	/* início serve para apontar para o endereço do 1° da lista. resultado precisa existir para receber o retorno da função-ponteiro struct *procura(). */
	struct lista l1, l2, l3;
	struct lista *inicio, *resultado;

	/* Sintaxe para atribuir uma string a um array (nome[15]). usar o = diretamente não funciona */
	/* pois array em C aponta para o primeiro char da string de [15]. Não faria sentido. */
	strcpy(l1.nome, "Lista 1");
	l1.valor = 10;
	strcpy(l2.nome, "Lista 2");
	l2.valor = 20;
	strcpy(l3.nome, "Lista 3");
	l3.valor = 30;

	inicio = &l1;
	l1.proximo = &l2;
	l2.proximo = &l3;
	l3.proximo = 0;

	printf("Digite um valor a ser procurado:\n");
	scanf("%d", &valor_usuario);

	/* Função-ponteiro *procura() com os argumentos, retornando para *resultado o endereço */
	resultado = procura(inicio, valor_usuario);

	/* Estrutura condicional com ? : para exercitar. Mais simples embora incomum. Notar que */
	/* resultado->valor é a maneira de chegar à variável valor da struct lista apontada por *resultado. */
	resultado == 0 ? printf("Valor não encontrado\n") : printf("%d encontrado na sublista %s.\n", resultado->valor, resultado->nome);

	return 0;
}

	/* Definição da função struct declarada no pré-processamento. */
struct lista *procura(struct lista *proc_struct_lista, int valor_procurado) {
	while (proc_struct_lista != 0) {
		if (proc_struct_lista->valor == valor_procurado) {
			return(proc_struct_lista);
		}
		else {
			proc_struct_lista = proc_struct_lista->proximo;
		}
	}
	return (struct lista *)0;
}






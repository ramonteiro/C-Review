/* A simple stack with an array implementation. */
#include <stdio.h>
#include <stdlib.h>
#define MAX 6

int count = 0;

/* Basic struct used along the code and an ALIAS 'st' for a cleaner code. */
struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st;

/* Declaration of auxiliary functions. They are defined after main function. */
void create_empty_stack(st *s);
int isFull(st *s);
int isEmpty(st *s);
void push(st *s, int new_item);
void pop(st *s);
void print_stack(st *s);

int main() {
	st *s = (st *)malloc(sizeof(st));

	create_empty_stack(s);

	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	push(s, 5);

	print_stack(s);

	printf("\n\nRemoving the top item of the stack:");
	pop(s);
	print_stack(s);
	printf("\n");
	printf("\nRemoving one more of the top:\n");
	pop(s);
	print_stack(s);
	printf("\n");
	return 0;
}

/* Definition of the auxiliary functions: */ 
void create_empty_stack(st *s) {
	s->top = -1;
}

int isFull(st *s) {
	if(s->top == MAX-1) {
		return 1;
	}
	else {
		return 0;
	}
}

int isEmpty(st *s) {
	if(s->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

void push(st *s, int new_item) {
	if (isFull(s)) {
		printf("Stack is already full. Sorry.\n");
	}
	else {
		s->top++;
		s->items[s->top] = new_item;
	}
	count++;
}

void pop(st *s) {
 	if (isEmpty(s)) {
 		printf("Stack is already empty. Sorry.\n");
 	}
 	else {
 		printf("Item popped: %d.\n", s->items[s->top]);
 		s->top--;
 	}
 	count--;
 	printf("\n");
}

void print_stack(st *s) {
	if(isEmpty(s)) {
		printf("Sorry, there is no stack. It`s empty!\n");
	}
	else {
		printf("Stack:\n");
		for (int i = 0; i < count; i++) {
			printf("%d ", s->items[i]);
		}
	}
}
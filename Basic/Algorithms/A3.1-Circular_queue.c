/* An algorithm to build a Circular Queue on C */
/* Last update: July-9th 2020. */
/* github.com/raphael-monteiro */

#include <stdio.h>
#define SIZE 5

/*---------------- Global variables --------------*/
int items[SIZE];
int front = -1;
int rear = -1;

/*----------- Aux Functions declaration ----------*/
int isFull();
int isEmpty();
void enqueue(int value);
int dequeue();
void display();


/*--------------- Main Function ------------------*/
int main() {

/* Test for dequeuing or displaying an empty queue: */
	dequeue();
	display();

/* Feeding and showing the queue: */
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

/*  Queue manipulation: */ 
	display();

	dequeue();
	display();
	dequeue();
	display();
 // This enqueue will work because it's a circular queue. 	
	// enqueue(1);
	display();
	dequeue();
	display();
	enqueue(1);
	display();
	return 0;
}

/*----------- Aux Functions definition ----------- */
int isFull() {
	if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
	return 1;	
	}
	return 0;
}

int isEmpty() {
	if (front == -1) {
		return 1;
	}
	return 0;
}

void enqueue(int value) {
	if (isFull()) {
		printf("Sorry. Queue is FULL.\n");
	}
	else {
		if (front == -1) {
			front = 0;
		}
		rear = (rear + 1) % SIZE;
		items[rear] = value;
		printf("Inserted item %d.\n", value);
	}
}

int dequeue() {
	int value;
	if (isEmpty()) {
		printf("Queue is EMPTY.\n");
		return (-1);
	}
	else {
		value = items[front];
	}
		if (front == rear) {
			front = -1;
			rear = -1;
		}
	else {
		front = (front + 1) % SIZE;
	}
	printf("\n Deleted value -> %d \n", value);
	return (value);
}

void display() {
	int i;
	if (isEmpty()) {
		printf("Queue is EMPTY.\n");
	}
	else {
		printf("\nFront -> %d ", items[front]);
		printf("\n Items -> ");
		for (i = front; i != rear; i = (i+1 % SIZE)) {
			printf("%d ", items[i]);
		}
		printf("%d ", items[i]);
		printf("\n Rear -> %d \n", items[rear]);
	}
}	
	
	
	
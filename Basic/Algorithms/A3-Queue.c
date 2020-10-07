/* An algorithm to build a Simple Queue on C */
/* Last update: July-9th 2020.
/* github.com/raphael-monteiro

#include <stdio.h>
#define SIZE 5

/*---------------- Global variables --------------*/
int items[SIZE];
int front = -1;
int rear = -1;

/*----------- Aux Functions declaration ----------*/
void enqueue(int value);
void dequeue(void);
void display(void);


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

/* Test for enqueuing a full queue: */
	enqueue(5);

/* Queue manipulation: */
	display();

	dequeue();
	display();
	dequeue();
	display();
/* An enqueue won't work because it's a simple not a circular queue. */	
	enqueue(1);
	display();

	return 0;
}

/*----------- Aux Functions definition ----------- */
void enqueue(int value) {
	if (rear == SIZE - 1) {
		printf("Sorry. Queue is FULL.\n");
	}
	else {
		if (front == -1) {
			front = 0;
		}
		rear++;
		items[rear] = value;
		printf("Inserted item %d.\n", value);
	}
}

void dequeue(void) {
	if (front == -1) {
		printf("Queue is EMPTY.\n");
	}
	else {
		printf("Deleted item %d.\n", items[front]);
		front++;
		if (front > rear) {
			front = rear = -1;
		}
	}
}

void display(void) {
	int i;
	if (rear == -1) {
		printf("Queue is EMPTY.\n");
	}
	else {
		printf("Queue elements are: \n");
		for (i = front; i <= rear; i++) {
			printf("%d -> ", items[i]);
		}
		printf("REAR OF THE QUEUE.\n");
	}
}	

	
		
	
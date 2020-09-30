/* A simple algorithm to sum N natural numbers on a scalable way. */

#include <stdio.h>
#include <stdlib.h>

/* Declaration of a simple fun function. */
int findSum(unsigned long n);

int main() {
	unsigned long sum = 0; 
	unsigned long N;

	N = 1000000;
	sum = findSum(N);
	
	printf("\nThe sum of %ld natural values is: %ld.\n", N, sum);

	// return 0;
}

/* Definition of the declared sum function */

/*	 Avoid no scalable solutions like below: 
 	   int findSum() {
    	int sum = 0;
    	for (int N = 1; N <= 10000000; N++) {
        sum = sum + N;
    	}
    	return sum;
	} 

	Instead, use a scalable solution: */

int findSum(unsigned long n) {
		unsigned long sum_f = 0;
		sum_f = n*((n+1)/2);
		return sum_f;
}

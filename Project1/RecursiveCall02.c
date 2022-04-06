#include<stdio.h>
void re();

int forward = 0;

void main() {
	re();
}

void re()
{
	printf("print : forward %d\n", ++forward);
	if (forward < 3) {
		re();
	}
}
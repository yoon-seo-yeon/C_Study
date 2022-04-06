#include <stdio.h>
void main()
{
	int num1 = 10;
	char c1 = 'a';
	int* numPtr = &num1;
	char* cPtr = &c1;

	void* ptr;

	ptr = numPtr;
	ptr = cPtr;

	numPtr = ptr;
	cPtr = ptr;
}
#include <stdio.h>
void main()
{
	char* c;
	short* s;
	int* i;
	float* f;
	double* d;
	printf("char *메모리의 크기 : %d 시작주소 : %p\n", sizeof(c), &c);
	printf("short *메모리의 크기 : %d 시작주소 : %p\n", sizeof(s), &s);
	printf("int *메모리의 크기 : %d 시작주소 : %p\n", sizeof(i), &i);
	printf("float *메모리의 크기 : %d 시작주소 : %p\n", sizeof(f), &f);
	printf("double *메모리의 크기 : %d 시작주소 : %p\n", sizeof(d), &d);

}
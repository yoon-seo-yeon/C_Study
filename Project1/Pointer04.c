#include <stdio.h>
void main()
{
	char* c;
	short* s;
	int* i;
	float* f;
	double* d;
	printf("char *�޸��� ũ�� : %d �����ּ� : %p\n", sizeof(c), &c);
	printf("short *�޸��� ũ�� : %d �����ּ� : %p\n", sizeof(s), &s);
	printf("int *�޸��� ũ�� : %d �����ּ� : %p\n", sizeof(i), &i);
	printf("float *�޸��� ũ�� : %d �����ּ� : %p\n", sizeof(f), &f);
	printf("double *�޸��� ũ�� : %d �����ּ� : %p\n", sizeof(d), &d);

}
#include <stdio.h>
void swap(int* x, int* y);

void main()
{
	int a = 100, b = 500;
	printf("�� ���α׷�  swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("�� ���α׷�  swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b);
}

void swap(int *x, int *y) {		//int *x=&a, int *y=&b�� ����.
	int temp;
	printf("�� ���α׷� swap() �Լ� ȣ�� ���� �� x=%d, y=%d\n", *x, *y);	//100,500
	temp = *x;
	*x = *y;
	*y = temp;
	printf("�� ���α׷� swap() �Լ� �� x=%d, y=%d\n", *x, *y);	//
}

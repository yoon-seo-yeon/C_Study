#include <stdio.h>
//Call By Reference �� C++���� ������
//C������ �۵��� �ȵ�
void swap(int& x, int 7y){
	int temp;
	printf("�� ���α׷� swap() �Լ� ȣ�� ���� �� x=%d, y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("�� ���α׷� swap() �Լ� �� x=%d, y=%d\n", x, y);
}

void main()
{
	int a = 100, b = 500;
	printf("�� ���α׷�  swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("�� ���α׷�  swap() �Լ� ȣ�� �� a=%d, b=%d\n", a, b);
}

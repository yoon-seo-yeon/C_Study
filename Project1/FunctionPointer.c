#include <stdio.h>

int foo(int x) {
	return x * x;
}

void main()
{
	//fcnPtr�� �Ű����� 1���� ������ �ִ� foo()�Լ��� ����Ű�� �Լ� ������ �����̰�
	//���� Ÿ���� int�̴�.
	int (*fcnPtr) (int) = foo;
	//int(*fcnPtr) (int,int)=foo;---�Ű����� 2���� �Լ��� ����Ű�� �������̴�.
	printf("%d\n", (*fcnPtr)(5));
	printf("%d\n", foo(5));
}
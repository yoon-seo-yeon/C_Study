#include <stdio.h>
void hello();

void main()
{
	hello();
}

//hello() �Լ��ȿ��� �ڽ��� �Լ��� ȣ���ϴ� �����
//���ȣ��(Recursive Call)
void hello()
{
	printf("Hello World!!\n");

	hello();
}
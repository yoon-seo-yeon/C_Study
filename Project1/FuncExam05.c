#include <stdio.h>

int rectangle(int a)		//main()�Լ��� �ִ� a�� ���� ���� ����
{
	return a * a;
	/*
	int result;
	result = a * a;
	return result;
	*/
}
void main()
{
	int a, area;
	printf("�� ���� ���̴� �Է�[cm] : ");
	scanf("%d", &a);
	area = rectangle(a);	//main()�Լ��� �ִ� a�� ����
	//rectangle(int a)�Լ��� �ִ� a���� ���� �Ѱ��ش�.
	printf("���簢���� ����=%d[cm], ����=%d[cm^2]\n", a, area);
}
#include <stdio.h>

int addall(int k, int e, int m) 
{
	int all;
	all = k + e + m;
	return all;// addall()�Լ��� ����Ǹ� ���� k, e, m, all�� �޸𸮿��� ��������.
}
//addall()�Լ��� main()���� �������� addall()�Լ��� ������ �ʿ䰡 ����.
//int addall(int k, int e, int m); �� �� ������ ����� �ʿ䰡 ����.
void main()
{
	int a, b, c;
	int sum;
	a = 10, b = 20, c = 30;
	sum = addall(a, b, c);
	printf("�� : %d\n", sum);
}
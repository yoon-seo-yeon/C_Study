#include <stdio.h>

int multiply(int a, int b)
{
	return a * b;
}

double divide(int a, int b)
{
	return a / b;
}

int main()
{
	int a, b;

	printf("�� �� �Է�\n");
	scanf("%d, %d", &a, &b);	
	
	printf("���� : %d * %d = %d\n", a, b, multiply(a, b));
	printf("������ : %d / %d = %.2f\n", a, b, divide(a, b));

	return 0;
}
#include <stdio.h>

int plus(int x, int y);
int minus(int x, int y);

int main(void)
{
	int result;
	int(*ptr_func)(int, int);
	int a, b;
	printf("<<<<�� ���� �հ� ���� ���ϴ� ���α׷�>>\n");

	printf("ù ��° ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);

	printf("�� ��° ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);

	ptr_func=plus;
	result = ptr_func(a, b);
	printf("%5d + %5d = %7d\n", a, b, result);

	ptr_func = minus;
	result = ptr_func(a, b);
	if(a>b)
		{printf("%5d - %5d = %7d\n", a, b, result);}
	else {printf("%5d - %5d = %7d\n", b, a, result); }
	return 0;
}				
int plus(int x, int y) {
	return x + y;
}					  
int minus(int x, int y) {
	if(x>y)
	{return x - y;} else { return y - x; }
}
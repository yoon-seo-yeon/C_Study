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

	printf("µÎ ¼ö ÀÔ·Â\n");
	scanf("%d, %d", &a, &b);	
	
	printf("°ö¼À : %d * %d = %d\n", a, b, multiply(a, b));
	printf("³ª´°¼À : %d / %d = %.2f\n", a, b, divide(a, b));

	return 0;
}
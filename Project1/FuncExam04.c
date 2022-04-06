#include <stdio.h>

int addall(int k, int e, int m)
{
	return k+e+m;
}
void main()
{
	int a, b, c;
	int all;
	a = 10, b = 20, c = 30;
	all = 2 * (a + b + c);
	printf("addall 함수의 all값은 %d\n", addall(a,b,c));
	//addall(a, b, c);
}
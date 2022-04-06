#include <stdio.h>

int addall(int k, int e, int m) 
{
	int all;
	all = k + e + m;
	return all;// addall()함수가 종료되면 변수 k, e, m, all은 메모리에서 없어진다.
}
//addall()함수가 main()보다 먼저오면 addall()함수를 선언할 필요가 없다.
//int addall(int k, int e, int m); 즉 이 문장을 기술할 필요가 없다.
void main()
{
	int a, b, c;
	int sum;
	a = 10, b = 20, c = 30;
	sum = addall(a, b, c);
	printf("합 : %d\n", sum);
}
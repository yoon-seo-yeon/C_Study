#include <stdio.h>
int ham(int a);

int main()
{
	int a = 2;
	{
		int a = 4;
		printf("%d\n", a);		//여기서 a는 {}내에 있는 변수를 참조한다.
	} //	{}을 벗어나는 순간에 a=4문장에서 a변수는 삭제된다.
	
	ham(a);		//a=2의 값이다.
	printf("%d\n", a);

	return 0;
}
int ham(a)		//a=2
{
	a = a + 10;		//a=12
	printf("%d\n", a);		//12출력

	return a;
}
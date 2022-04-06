#include <stdio.h>
void hello();

void main()
{
	hello();
}

//hello() 함수안에서 자신의 함수를 호출하는 방식을
//재귀호출(Recursive Call)
void hello()
{
	printf("Hello World!!\n");

	hello();
}
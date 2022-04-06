#include <stdio.h>

int foo(int x) {
	return x * x;
}

void main()
{
	//fcnPtr는 매개변수 1개를 가지고 있는 foo()함수를 가리키는 함수 포인터 변수이고
	//리턴 타입은 int이다.
	int (*fcnPtr) (int) = foo;
	//int(*fcnPtr) (int,int)=foo;---매개변수 2개인 함수를 가리키는 포인터이다.
	printf("%d\n", (*fcnPtr)(5));
	printf("%d\n", foo(5));
}
#include <stdio.h>
int a();		//함수 선언

//main()함수의 k변수와 a()함수의 k변수는 다른 존재이다.
//즉 stack이라는 메모리 공간에서 서로 다른 위치에서 메모리를 가지고 있다.
int main()
{
	int k =10;		//선언된 변수는 main()안에서만 사용할 수 있다.
	printf("첫번째 k는 %d\n", k);
	printf("두번째 k는 %d\n", a(k));
	printf("두번째 k는 %d\n", k);

	return 0;
}
int a(int k)		//k변수는 a()함수 안에서만 사용할 수 있다.
{
	k = k * 2;
	return k;
	//a()함수가 종료되면 변수 k는 사라(삭제)진다.
}
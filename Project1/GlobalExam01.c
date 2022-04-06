#include <stdio.h>
void a();		//함수 선언
int b = 10;		//전역변수
//전역변수로 선언된 변수는 모든 함수에 사용할 수 있다.

int main()
{
	printf("첫번째 b는 %d\n", b);
	a();
	printf("두번째 b는 %d\n", b);

	return 0;
}
//값을 돌려줄 필요가 없을 경우에는 void를 사용한다.
void a()
{
	b = b + 20;
}
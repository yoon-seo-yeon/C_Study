#include <stdio.h>	//전처리기가 처리를 합니다

//void add(int x, int y);		//함수선언
void add(int , int );		//함수선언
//일반 함수가 main()함수보다 밑에 있을 경우에는
//반드시 함수를 선언해야 한다

int main()
{
	add(1, 2);
	add(3, 4);
	add(5, 6);
	add(7, 8);

	return 0;
}
//void 이외의 자료형(char, int, float, double, ...)이 오면 
//반드시 return을 사용해야 한다

//함수 정의
void add(int x, int y) {	//리턴값이 없는 경우
	int z;
	z = x + y;
	printf("%3d\n", z);

	//return;
}
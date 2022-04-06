#include <stdio.h>

int main()
{
	int a[7] = { 1,2,3,4,5,6 };		//정수형 배열의 선언
	int i;										//정수형 변수 선언
	for (i = 0; i < 7; i++) {			//for 반복문
		printf("%2d", a[i]);			//a[7] 배열의 변수 i 이용 반복 출력
	}
	printf("\n");							//줄 바꾸기 명령
	return 0;
}

//결과 :  1 2 3 4 5 6 0
// two_dimensional_array.c
#include <stdio.h>

int main()
{
	int numArr[3][4] = {		//세로 크기 3, 가로 크리 4인 int형 2차원 배열 선언
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};

	printf("%d\t", numArr[0][0]);		//11 : 세로 인덱스 0, 가로 인덱스 0인 요소 출력
	printf("%d\t", numArr[1][2]);		//77 : 세로 인덱스 1, 가로 인덱스 2인 요소 출력
	printf("%d\t", numArr[2][0]);		//99 : 세로 인덱스 2, 가로 인덱스 0인 요소 출력
	printf("%d\n", numArr[2][3]);		//132 : 세로 인덱스 2, 가로 인덱스 2인 요소 출력
							//↑가로 인덱스

	return 0;

}
// two_dimensional_array_size.c
#include <stdio.h>

void main()
{
	int numArr[3][4] = {		//세로크기3, 가로크기4인 int형 2차원 배열 선언
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	printf("%d\t", sizeof(numArr));
							//4바이트 크기의 요소가 12(4*3)개이므로 48
	int col = sizeof(numArr[0]) / sizeof(int);
			//4 : 2차원 배열의 가로 크기를 구할 때는
			//가로 한 줄의 크기를 요소의 크기로 나눠줌
	int row = sizeof(numArr) / sizeof(numArr[0]);
			//2차원 배열의 세로 크기를 구할 때는
			//배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
	printf("%d\t", col);		//4
	printf("%d\n", row);	//3
}
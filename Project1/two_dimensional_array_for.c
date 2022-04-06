// two_dimensional_array_for.c
#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		//세로크기3, 가로크기4인 int형 2차원 배열 선언
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	int col = sizeof(numArr[0]) / sizeof(int);
	int row = sizeof(numArr) / sizeof(numArr[0]);
	for (int i = 0; i < row; i++) {		//2차원 배열의 세로 크기만큼 반복
		for (int j = 0; j < col; j++) {	//2차원 배열의 가로 크기만큼 반복
			printf("%5d", numArr[i][j]);
							//2차원 배열의 인덱스에 반복문의 변수 i, j를 지정

		}
		printf("\n");	//가로 요소를 출력한 뒤 다음 줄로 넘어감
	}
	return 0;
}
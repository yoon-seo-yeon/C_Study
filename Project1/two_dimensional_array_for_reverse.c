// two_dimensional_array_for_reverse.c
#include <stdio.h>

int main()
{
	int numArr[3][4] = {		//세로크기3, 가로크기4인 int형 2차원 배열선언
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	int col = sizeof(numArr[0]) / sizeof(int);		//4 : 2차원 배열의 가로
	//크기를 구할 때는 가로 한 줄의 크기를 요소의 크기로 나눠줌
	int row = sizeof(numArr) / sizeof(numArr[0]);		//3 : 2차원 배열의
	//세로 크기를 구할 때는 배열이 차지하는 전체 공간을 가로 한 줄의 크기로 나눠줌
	for (int i = row - 1; i >= 0; i--) {		//세로 크기 -1부터 역순으로 반복
		for (int j = col - 1; j >= 0; j--) {		//가로 크기 -1부터 역순으로 반복
			printf("%5d", numArr[i][j]);
			//2차원 배열의 인덱스에 반복분의 변수 i, j를 지정
		}
		printf("\n");	//가로 요소를 출력한 뒤 다음 줄로 넘어감
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int numArr[10];

	numArr[0] = 11;
	numArr[1] = 22;
	numArr[2] = 33;
	numArr[3] = 44;
	numArr[4] = 55;
	numArr[5] = 66;
	numArr[6] = 77;
	numArr[7] = 88;
	numArr[8] = 99;
	numArr[9] = 110;


	// 인덱스 범위를 벗어난 경우 쓰레기값(garbage value)이 출력된다.
	// int numArr[10]; 경우에 인덱스는 0~9 사이가 된다.
	//printf("%d\n", numArr[-1]);
	//printf("%d\n", numArr[10]);
	//printf("%d\n", numArr[20]);


	return 0;
}
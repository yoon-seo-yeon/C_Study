#include <stdio.h>

int main()
{
	int numArr[] = { 11,22,33,44,55 };
	// 데이터 갯수에 따라서 기억공간의 크기가 결정

	//numArr[]배열의 역순으로 출력하는 것은
	//numArr[9], numArr[8], numArr[7], numArr[6]...numArr[0]
	//for (int i = sizeof(numArr) / sizeof(int); i >= 0; i--)---오류발생유발
	for (int i = sizeof(numArr) / sizeof(int)-1; i >= 0; i--)
	//i는 4,3,2,1,0순으로 진행된다.
	{
		printf("%4d", numArr[i]);
	}
	return 0;
}
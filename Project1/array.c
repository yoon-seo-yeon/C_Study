#include <stdio.h>

int main()
{
	//int numA[0]; --- 기억공간의 갯수를 실정할 떄는 1이상 이어야 한다.
	int numB[1];

	//int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	int numArr[] = { 11,22,33,44,55,66,77,88};
	// numArr[0]=11, numArr[1]=22, numArr[2]=33, numArr[3]=44,
	// numArr[4]=55, numArr[5]=66, numArr[6]=77, numArr[7]=88
	// 데이터 갯수 만큼 기억공간이 만들어진다.

	//int numBrr[]; // 오류 발생

	//printf("%d\n", numArr[9]);  --- 쓰레기 값

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);

	numArr[0] = 111;
	printf("%d\n", numArr[0]);

	return 0;
}
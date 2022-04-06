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

	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);

	printf("numArr배열의 전체 크기 : %d\n", sizeof(numArr));
	printf("numArr배열의 방의 갯수 : %d\n", sizeof(numArr)/sizeof(int));

	return 0;
}
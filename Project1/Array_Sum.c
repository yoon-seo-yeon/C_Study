#include <stdio.h>

int main()
{
	int numArr[10];
	int sum = 0;

	numArr[0] = 11; numArr[1] = 22;	numArr[2] = 33;
	numArr[3] = 44; numArr[4] = 55;	numArr[5] = 66;
	numArr[6] = 77; numArr[7] = 88;  numArr[8] = 99;
	numArr[9] = 110;

	// sum+=numArr[0] + numArr[1]....numArr[9];
	for (int i = 0; i < 10; i++) {
		sum = sum + numArr[i];
	}

	printf("배열의 합 : %d\n", sum);



	return 0;
}
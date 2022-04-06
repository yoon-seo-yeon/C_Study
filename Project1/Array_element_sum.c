#include <stdio.h>

int main()
{
	int numArr[] = { 11,22,33,44,55 };
	int sum = 0; //배열 요소들의 합을 저장하기 위한 변수
	
	for (int i =0; i< sizeof(numArr) / sizeof(int); i++)
	{
		//sum=sum+numArr[i];
		sum += numArr[i];
		printf("%4d", numArr[i]);
	}
	printf("\n배열의 합 : %d\n", sum);
	printf("\n배열의 평균 : %.2f\n", (double)sum / (sizeof(numArr) / sizeof(int)));
	//sizeof(numArr)/sizeof(int)--배열의 갯수
	return 0;
}
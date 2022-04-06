#include <stdio.h>

int main()
{
	//프로그램을 작성할 경우에는
	//1. 입력, 2. 처리 3. 출력
	int numArr[] = { 11,22,33,44,55,66,77,88,99,110 };
	int sum = 0; //배열 요소들의 합을 저장하기 위한 변수

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		//numArr[i]=numArr[i]*2;
		numArr[i] *= 2;//배열의 요소의 값을 2배로 증가시킴
	}
	printf("\n"); //줄바꿈
	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		printf("%4d", numArr[i]);
	}
		return 0;
}
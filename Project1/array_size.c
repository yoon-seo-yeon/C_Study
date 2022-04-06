#include <stdio.h>

int main()
{
	int numArr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	printf("%d\n", sizeof(numArr));		
	//sizeof(numArr)는 numArr배열의 전체 크기
	printf("%d\n", sizeof(numArr) / sizeof(int));
	printf("%d\n", sizeof(numArr) / sizeof(numArr[0]));
	//배열의 갯수를 구할때

	return 0;
}
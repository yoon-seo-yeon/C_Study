#include <stdio.h>

int  main()
{
	int nData = 10;

	int* pnData = &nData;
	//pnData는 정수형 데이터를 가리키는 포인터 변수로 선언과 동시에
	//nDapa기억 공간의 주소값을 받음
	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);

	*pnData = 20;	//*pnData는 nData와 같다
	printf("%d\n", nData);
}
#include <stdio.h>

void main()
{
	int nData = 10;
	int* pnData = &nData;
	int** ppnData = &pnData;
	int*** pppnData = &ppnData;

	printf("%p\n", **pppnData);
	printf("%p\n", *ppnData);
	printf("%p\n", pnData);
	printf("%d\n", ***pppnData);
}
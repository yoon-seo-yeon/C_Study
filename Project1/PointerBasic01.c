#include <stdio.h>

int  main()
{
	int nData = 10;

	int* pnData = &nData;
	//pnData�� ������ �����͸� ����Ű�� ������ ������ ����� ���ÿ�
	//nDapa��� ������ �ּҰ��� ����
	printf("%d, %d\n", nData, *pnData);
	printf("%p, %p\n", &nData, pnData);

	*pnData = 20;	//*pnData�� nData�� ����
	printf("%d\n", nData);
}
#include <stdio.h>

int main()
{
	int numArr[] = { 11,22,33,44,55 };
	// ������ ������ ���� �������� ũ�Ⱑ ����

	//numArr[]�迭�� �������� ����ϴ� ����
	//numArr[9], numArr[8], numArr[7], numArr[6]...numArr[0]
	//for (int i = sizeof(numArr) / sizeof(int); i >= 0; i--)---�����߻�����
	for (int i = sizeof(numArr) / sizeof(int)-1; i >= 0; i--)
	//i�� 4,3,2,1,0������ ����ȴ�.
	{
		printf("%4d", numArr[i]);
	}
	return 0;
}
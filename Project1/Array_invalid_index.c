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


	// �ε��� ������ ��� ��� �����Ⱚ(garbage value)�� ��µȴ�.
	// int numArr[10]; ��쿡 �ε����� 0~9 ���̰� �ȴ�.
	//printf("%d\n", numArr[-1]);
	//printf("%d\n", numArr[10]);
	//printf("%d\n", numArr[20]);


	return 0;
}
#include <stdio.h>

int main()
{
	int numArr[] = { 11,22,33,44,55 };
	int sum = 0; //�迭 ��ҵ��� ���� �����ϱ� ���� ����
	
	for (int i =0; i< sizeof(numArr) / sizeof(int); i++)
	{
		//sum=sum+numArr[i];
		sum += numArr[i];
		printf("%4d", numArr[i]);
	}
	printf("\n�迭�� �� : %d\n", sum);
	printf("\n�迭�� ��� : %.2f\n", (double)sum / (sizeof(numArr) / sizeof(int)));
	//sizeof(numArr)/sizeof(int)--�迭�� ����
	return 0;
}
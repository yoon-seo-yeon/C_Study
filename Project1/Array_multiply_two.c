#include <stdio.h>

int main()
{
	//���α׷��� �ۼ��� ��쿡��
	//1. �Է�, 2. ó�� 3. ���
	int numArr[] = { 11,22,33,44,55,66,77,88,99,110 };
	int sum = 0; //�迭 ��ҵ��� ���� �����ϱ� ���� ����

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		//numArr[i]=numArr[i]*2;
		numArr[i] *= 2;//�迭�� ����� ���� 2��� ������Ŵ
	}
	printf("\n"); //�ٹٲ�
	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		printf("%4d", numArr[i]);
	}
		return 0;
}
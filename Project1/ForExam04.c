// 1~20 ������ ���� �߿��� ¦���� �հ� Ȧ���� ���� ����ϴ� 
// ���α׷��� �ۼ��Ͻÿ�.(��, ¦���� ���� EvensSum, Ȧ���� ���� OddSum)
// for���� �̿��ؼ� �ۼ��� ��
#include <stdio.h>
void main()
{
	int EvenSum = 0, OddSum = 0;

	for (int i = 2; i <= 20; i++)
	{
		if (i % 2 == 0) //2�� ����� �������� 0�̸� ¦��
			EvenSum += i;
		else // 2�� ����� �������� 0�� �ƴϸ� Ȧ��
			OddSum += i;
	}
	printf("¦���� �� : %d\n", EvenSum);
	printf("Ȧ���� �� : %d\n", OddSum);
}
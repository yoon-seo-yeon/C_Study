// 1~20 ������ ���� �߿��� ¦���� �հ� Ȧ���� ���� ����ϴ� 
// ���α׷��� �ۼ��Ͻÿ�.(��, ¦���� ���� EvensSum, Ȧ���� ���� OddSum)
// for���� �̿��ؼ� �ۼ��� ��

#include <stdio.h>
void main()
{
	int EvenSum = 0, OddSum = 0;

	for (int i = 2; i <= 20; i += 2)
	{
		EvenSum += i;
	printf("%d\n", i);
    }
	printf("¦���� �� : %d\n", EvenSum);

	for (int i = 1; i <= 19; i += 2)
	{
		OddSum += i;
		printf("%d\n", i);
	}
	printf("Ȧ���� �� : %d\n", OddSum);
}

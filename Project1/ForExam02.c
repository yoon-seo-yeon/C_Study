// 1~10������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
void main()
{
	// �ݺ��� ������ i, ���� ������ ���� sum
	int sum=0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i; // sum=sum+i;
		printf("%d\t", i);
	}
	printf("1~10������ �� : %d\n", sum);
}
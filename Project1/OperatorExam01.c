// 2���� ������ �Է��ؼ� +,-,*,%�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
#include <stdio.h>

void main()
{
	int nNum1, nNum2;
	printf("2���� ������ �Է� : ");
	scanf("%d", &nNum1);
	scanf("%d", &nNum2);
	printf("2���� ������ %d, %d\n", nNum1, nNum2);
	printf("%d + %d = %d\n", nNum1, nNum2, nNum1 + nNum2);
	printf("%d - %d = %d\n", nNum1, nNum2, nNum1 - nNum2);
	printf("%d * %d=%d\n", nNum1, nNum2, nNum1 * nNum2);
	printf("%d / %d=%d\n", nNum1, nNum2, nNum1 / nNum2);
	printf("%d %% %d=%d\n", nNum1, nNum2, nNum1 % nNum2);
}
// 2개의 정수를 입력해서 +,-,*,%를 출력하는 프로그램을 작성하시오
#include <stdio.h>

void main()
{
	int nNum1, nNum2;
	printf("2개의 정수를 입력 : ");
	scanf("%d", &nNum1);
	scanf("%d", &nNum2);
	printf("2개의 정수는 %d, %d\n", nNum1, nNum2);
	printf("%d + %d = %d\n", nNum1, nNum2, nNum1 + nNum2);
	printf("%d - %d = %d\n", nNum1, nNum2, nNum1 - nNum2);
	printf("%d * %d=%d\n", nNum1, nNum2, nNum1 * nNum2);
	printf("%d / %d=%d\n", nNum1, nNum2, nNum1 / nNum2);
	printf("%d %% %d=%d\n", nNum1, nNum2, nNum1 % nNum2);
}
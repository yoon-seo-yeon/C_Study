// 1~10까지의 합을 구하는 프로그램을 작성하시오.
#include <stdio.h>
void main()
{
	// 반복한 변수는 i, 합을 저장할 변수 sum
	int sum=0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i; // sum=sum+i;
		printf("%d\t", i);
	}
	printf("1~10까지의 합 : %d\n", sum);
}
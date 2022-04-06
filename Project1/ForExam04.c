// 1~20 사이의 숫자 중에서 짝수의 합과 홀수의 합을 출력하는 
// 프로그램을 작성하시오.(단, 짝수의 합은 EvensSum, 홀수의 합은 OddSum)
// for문을 이용해서 작성할 것
#include <stdio.h>
void main()
{
	int EvenSum = 0, OddSum = 0;

	for (int i = 2; i <= 20; i++)
	{
		if (i % 2 == 0) //2로 나누어서 나머지가 0이면 짝수
			EvenSum += i;
		else // 2로 나누어서 나머지가 0이 아니면 홀수
			OddSum += i;
	}
	printf("짝수의 합 : %d\n", EvenSum);
	printf("홀수의 합 : %d\n", OddSum);
}
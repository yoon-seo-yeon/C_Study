// 1~20 사이의 숫자 중에서 짝수의 합과 홀수의 합을 출력하는 
// 프로그램을 작성하시오.(단, 짝수의 합은 EvensSum, 홀수의 합은 OddSum)
// for문을 이용해서 작성할 것

#include <stdio.h>
void main()
{
	int EvenSum = 0, OddSum = 0;

	for (int i = 2; i <= 20; i += 2)
	{
		EvenSum += i;
	printf("%d\n", i);
    }
	printf("짝수의 합 : %d\n", EvenSum);

	for (int i = 1; i <= 19; i += 2)
	{
		OddSum += i;
		printf("%d\n", i);
	}
	printf("홀수의 합 : %d\n", OddSum);
}

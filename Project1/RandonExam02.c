//<조건>1이 나오면 500원 2가 나오면 1000원, 3이 나오면 1500원
//			 4가 나오면 2000원, 5가 나오면 2500원, 6이 나오면 3000원
//주사위를 10번 던져서 전체 금액의 합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int sum = 0, num;

	srand((unsigned)time(NULL));	//프로그램이 실행될때마다
	//새로운 난수를 발생시키게 한다.

	for (int i = 0; i < 10; i++)
	{
		num = rand() % 6+1;
		//이 값의 범위는 1~6 사이
		sum += num * 500;
	}
	printf("금액 : %d\n", sum);

}
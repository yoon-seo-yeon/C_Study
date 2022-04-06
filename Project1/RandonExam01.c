#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num, cnt = 0;

	srand((unsigned)time(NULL));	//프로그램이 실행될때마다
	//새로운 난수를 발생시키게 한다.

	for (int i = 0; i <50; i++)
	{
		num = rand() % 5;		//어떤 양의 정수를 5로 나누면 나머지는 0, 1, 2, 3, 4
		printf("%3d", num);
		cnt++;
		if (cnt % 4 == 0)	//1줄에 4개를 출력하기 위한 문장이다.
			printf("\n");
	}						 
	printf("\n");

}
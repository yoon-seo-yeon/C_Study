#include <stdio.h>

void main()
{
	char d[7] = { 'd', 'i', 'g', 'i', 't', 'a', '1' };		//문자 배열 선언
	int i;															//정수형 변수 선언
	for (i = 0; i < 7; i++)								//for 반복문
		printf("%c\n", d[i]);								//문자 배열 출력
}
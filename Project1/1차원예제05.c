#include <stdio.h>

int main()
{
	char a[20];										//문자열 배열의 선언
	printf("문자열 입력?: ");						//출력문
	scanf("%s", a);									//문자열을 입력
	printf("입력 문자열 출력!: %s\n", a);		//문자열을 출력
	printf("2번째 문자 출력!: %c\n", a[1]);	//문자열 배열 a[1] 요소 출력
	return 0;
}
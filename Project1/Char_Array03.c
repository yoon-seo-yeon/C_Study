#include <stdio.h>	//전처리기가 처리를 합니다

int main()
{
	char a[20];	//일반적으로 메모리 공간을 충분하게 설정한다

	printf("문자열 입력 : ");
	scanf("%s", a);

	printf("입력 문자열 출력: %s\t", a);
	printf("2번째 문자 출력: %c", a[1]);

	return 0;
}
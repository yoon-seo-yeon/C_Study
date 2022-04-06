#include <stdio.h>

int main()
{
	int a[3], i;							//배열과 변수를 선언
	for (i = 0; i < 3; i++) {		//for 반복문
		scanf("%d", &a[i]);		//표준 입력 함숫값 입력
	}
	printf("a의 요솟값 출력: ");	//출력문
	for (i = 0; i < 3; i++) {		//for 반복문
		printf("%2d", a[i]);		//a[i] 요솟값 출력
	}
	printf("\n");						//줄 바꾸기 명령
	return 0;
}
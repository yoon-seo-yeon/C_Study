#include <stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int* p;
	p = a;	//배열 a의 시작 주소값을 p에게 넘겨준다.
	//p는 배열을 가리키는 포인터 변수이지만 배열처럼 사용
	//a = p + 1;-----오류발생(배열의 이름(a)은 주소값을 나타내는 상수이다.

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		printf("a[%d]=%d\t", i, *(p + i));
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, *(&a [i]));
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, a[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, p[i]);
	}
}
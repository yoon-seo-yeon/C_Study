#include <stdio.h>
void swap(int, int);

void main()
{
	int a = 100, b = 500;
	printf("주 프로그램  swap() 함수 호출 전 a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("주 프로그램  swap() 함수 호출 후 a=%d, b=%d\n", a, b);
}
void swap(int x, int y) {
	int temp;
	printf("부 프로그램 swap() 함수 호출 시작 전 x=%d, y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("부 프로그램 swap() 함수 끝 x=%d, y=%d\n", x, y);
}

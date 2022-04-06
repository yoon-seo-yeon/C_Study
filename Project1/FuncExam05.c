#include <stdio.h>

int rectangle(int a)		//main()함수에 있는 a의 값을 전달 받음
{
	return a * a;
	/*
	int result;
	result = a * a;
	return result;
	*/
}
void main()
{
	int a, area;
	printf("한 변의 길이는 입력[cm] : ");
	scanf("%d", &a);
	area = rectangle(a);	//main()함수에 있는 a의 값을
	//rectangle(int a)함수에 있는 a에게 값을 넘겨준다.
	printf("정사각형의 길이=%d[cm], 면적=%d[cm^2]\n", a, area);
}
#include <stdio.h>

void main()
{
	//배열의 이름은 변수가 아니고 상수이다.
	//포인터 변수는 변수로도 사용이 가능하고
	//배열 이름으로도 가능하다.
	char* p;
	p = "KOREA";
	//p = p + 3;----포인터 변수이기 때문에 주소값 변경이 가능함

	for (int i = 0; i <6; i++) 
		printf("*(p+%d) = %c\n", i, *(p + i));

	printf("\n\n");

	for (int i = 0; i < 6; i++) 
		printf("*p[%d] = %c\n", i, p[i]);
}
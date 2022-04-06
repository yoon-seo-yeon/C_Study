#include <stdio.h>
#include <string.h>

void main()
{
	char* s1 = "C Language";
	//s1은 포인터 변수인데 주소값을 가지고 있다. 그런데
	//그 주소값의 내용물(값)은 문자(char)이다.
	
	for (int i = 0; i < strlen(s1); i++) {
		printf("%3c", s1[i]);
	}
	printf("\n\n문자열의 길이는 : %d\n", strlen(s1));
	//strlen(s1)는 s1이 가리키는 주소부터 시작하여 NULL(\0)값 전까지 
	//기억공간의 갯수를 구하는 함수이다.

	//배열 이름은 주소값을 나타내는 상수이다.
	//배열을 가리키는 포인터는 변수이다. 그러나 배열처럼 사용도 가능하다.
}
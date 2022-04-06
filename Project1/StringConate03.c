#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* s1 = "world";
	char* s2 = malloc(sizeof(char) * 20);
	//heap 영역에 20바이트 메모리가 생성된다.

	strcpy(s2, "Hello");		//s2의 비어있는 기억공간에 "Hello"를
	//복사를 한다.

	strcat(s2, s1);
	//s2뒤에 s1의 문자열을 붙인다.

	printf("%s", s2);

	free(s2);		//heap 영역에 20바이트 메모리를  정리(삭제)한다.

	return 0;
}
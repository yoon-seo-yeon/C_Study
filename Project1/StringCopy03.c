#include <stdio.h>
#include <string.h>	  
#include <stdlib.h>

int main()
{
	char* s1 = "Hello";
	char* s2 = malloc(sizeof(s1));	
	//malloc()함수는 heap영역에 메모리가 s1의 크기만큼 생성된다.

	strcpy(s2, s1);
	//정상적으로 복사가 된다.

	printf("%s\n", s2);

	return 0;
}
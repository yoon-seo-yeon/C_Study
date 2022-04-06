#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello";
	char *s2="";

	strcpy(s2, s1);
	//정상적으로 복사가 안 된다. s2가 메모리가 없고
	//주소값만 가지고 있는 상태이다.

	printf("%s\n", s2);

	

	return 0;
}
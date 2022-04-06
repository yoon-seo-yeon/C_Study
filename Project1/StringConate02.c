#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = "world";
	char *s2 = "Hello";

	strcat(s2, s1);
	//s2뒤에 s1의 문자열을 붙인다.

	printf("%s", s2);
	//정상적으로 출력이 안된다.

	return 0;
}
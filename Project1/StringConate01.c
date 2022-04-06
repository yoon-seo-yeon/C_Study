#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[10] = "world";
	//char s2[10] = "Hello"; ---오류가 발생한다.
	char s2[20] = "Hello";
	 
	strcat(s2, s1);		   
	//s2뒤에 s1의 문자열을 붙인다.

	printf("%s", s2);

	return 0;
}
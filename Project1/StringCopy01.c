#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char s2[10];

	strcpy(s2, s1);
	//s1이 원본이고 s2에게 복사를 한다.

	printf("%s\n", s2);

	printf("s1의 주소값 : %p\n", s1);
	printf("s2의 주소값 : %p", s2);

	return 0;
}
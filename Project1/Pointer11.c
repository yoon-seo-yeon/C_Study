#include <stdio.h>

void main()
{
	char* p;
	p = "KOREA COMPUTER";

	//%s는 항상 주소값부터 문자열 끝까지(NULL 전까지) 출력한다
	//따라서 %s에 대응하는 변수는 주소값이어야 한다.
	printf("%s\n", p+6);
}
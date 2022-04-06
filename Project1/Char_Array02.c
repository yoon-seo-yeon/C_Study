#include <stdio.h>

int main()
{
	char a[9] = "language";
	char b[] = "program";

	printf("%s\n", a);	//a는 배열의 시작주소
	printf("%s\n", &a[0]);	//&a[0]는 a[0]의 주소

	printf("%c\n", a[0]);	//a[0]의 값

	printf("%s\n", b);	//b는 배열의 시작주소

	printf("%s\n", a+1);	//%s의 의미는 a+1의 주소부터 끝까지 출력하라	
	printf("%s\n\n\n", b+2);

	for (int i = 0; i < sizeof(a) / sizeof(char); i++) {
		printf("%s\n", a + i);
	}

	printf("\n\n");	//줄바꿈

	for (int i = 0; i < sizeof(a)/sizeof(char); i++) {
		printf("%s\n", &a[i]);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char s2[10];

	strcpy(s2, s1);
	//s1�� �����̰� s2���� ���縦 �Ѵ�.

	printf("%s\n", s2);

	printf("s1�� �ּҰ� : %p\n", s1);
	printf("s2�� �ּҰ� : %p", s2);

	return 0;
}
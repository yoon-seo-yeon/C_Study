#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = "world";
	char *s2 = "Hello";

	strcat(s2, s1);
	//s2�ڿ� s1�� ���ڿ��� ���δ�.

	printf("%s", s2);
	//���������� ����� �ȵȴ�.

	return 0;
}
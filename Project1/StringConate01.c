#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[10] = "world";
	//char s2[10] = "Hello"; ---������ �߻��Ѵ�.
	char s2[20] = "Hello";
	 
	strcat(s2, s1);		   
	//s2�ڿ� s1�� ���ڿ��� ���δ�.

	printf("%s", s2);

	return 0;
}
#include <stdio.h>
#include <string.h>	  
#include <stdlib.h>

int main()
{
	char* s1 = "Hello";
	char* s2 = malloc(sizeof(s1));	
	//malloc()�Լ��� heap������ �޸𸮰� s1�� ũ�⸸ŭ �����ȴ�.

	strcpy(s2, s1);
	//���������� ���簡 �ȴ�.

	printf("%s\n", s2);

	return 0;
}
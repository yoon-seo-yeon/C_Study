#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello";
	char *s2="";

	strcpy(s2, s1);
	//���������� ���簡 �� �ȴ�. s2�� �޸𸮰� ����
	//�ּҰ��� ������ �ִ� �����̴�.

	printf("%s\n", s2);

	

	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* s1 = "world";
	char* s2 = malloc(sizeof(char) * 20);
	//heap ������ 20����Ʈ �޸𸮰� �����ȴ�.

	strcpy(s2, "Hello");		//s2�� ����ִ� �������� "Hello"��
	//���縦 �Ѵ�.

	strcat(s2, s1);
	//s2�ڿ� s1�� ���ڿ��� ���δ�.

	printf("%s", s2);

	free(s2);		//heap ������ 20����Ʈ �޸𸮸�  ����(����)�Ѵ�.

	return 0;
}
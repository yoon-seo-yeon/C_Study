#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "Mirim Meister";
	char* s2 = "mirim Meister";

	int ret = strcmp(s1, s2);		//���ڿ��� ���ϴ� �Լ�	
	//s1�� s2�� ���ڿ��� ���� ��쿡�� 0���� ����
	//s1�� s2�� ���ڿ��� �ٸ� ��쿡�� -1���� ����

	printf("%d", ret);

	return 0;
}
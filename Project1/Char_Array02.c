#include <stdio.h>

int main()
{
	char a[9] = "language";
	char b[] = "program";

	printf("%s\n", a);	//a�� �迭�� �����ּ�
	printf("%s\n", &a[0]);	//&a[0]�� a[0]�� �ּ�

	printf("%c\n", a[0]);	//a[0]�� ��

	printf("%s\n", b);	//b�� �迭�� �����ּ�

	printf("%s\n", a+1);	//%s�� �ǹ̴� a+1�� �ּҺ��� ������ ����϶�	
	printf("%s\n\n\n", b+2);

	for (int i = 0; i < sizeof(a) / sizeof(char); i++) {
		printf("%s\n", a + i);
	}

	printf("\n\n");	//�ٹٲ�

	for (int i = 0; i < sizeof(a)/sizeof(char); i++) {
		printf("%s\n", &a[i]);
	}
	return 0;
}
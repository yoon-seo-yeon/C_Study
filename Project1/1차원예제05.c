#include <stdio.h>

int main()
{
	char a[20];										//���ڿ� �迭�� ����
	printf("���ڿ� �Է�?: ");						//��¹�
	scanf("%s", a);									//���ڿ��� �Է�
	printf("�Է� ���ڿ� ���!: %s\n", a);		//���ڿ��� ���
	printf("2��° ���� ���!: %c\n", a[1]);	//���ڿ� �迭 a[1] ��� ���
	return 0;
}
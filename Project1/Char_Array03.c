#include <stdio.h>	//��ó���Ⱑ ó���� �մϴ�

int main()
{
	char a[20];	//�Ϲ������� �޸� ������ ����ϰ� �����Ѵ�

	printf("���ڿ� �Է� : ");
	scanf("%s", a);

	printf("�Է� ���ڿ� ���: %s\t", a);
	printf("2��° ���� ���: %c", a[1]);

	return 0;
}
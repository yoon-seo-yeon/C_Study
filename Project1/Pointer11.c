#include <stdio.h>

void main()
{
	char* p;
	p = "KOREA COMPUTER";

	//%s�� �׻� �ּҰ����� ���ڿ� ������(NULL ������) ����Ѵ�
	//���� %s�� �����ϴ� ������ �ּҰ��̾�� �Ѵ�.
	printf("%s\n", p+6);
}
#include <stdio.h>
void a();		//�Լ� ����
int b = 10;		//��������
//���������� ����� ������ ��� �Լ��� ����� �� �ִ�.

int main()
{
	printf("ù��° b�� %d\n", b);
	a();
	printf("�ι�° b�� %d\n", b);

	return 0;
}
//���� ������ �ʿ䰡 ���� ��쿡�� void�� ����Ѵ�.
void a()
{
	b = b + 20;
}
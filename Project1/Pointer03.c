#include <stdio.h>
void main()
{
	int i = 5, j = 10;
	int* p = &i;//�ʱ�ȭ(����� ���ÿ� ���� �Ҵ�)
	//p�� ������ �����̰�, �ּ��� ������ �������̴�.
	//���� i�� �ּҰ��� p�� ����
	//���� &i�� p�� ���� �ּҰ��� ������ �ִ�.
	int* q = &j;

	printf("(1) i=%d, j=%d\n", i, j);
	printf("(2) &i=%p, &j=%p\n", &i, &j);
	printf("(3) p=%p, q=%p\n", p, q);
	printf("(4) *p=%d, *q=%d\n",*p, *q);

}
#include <stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int* p;
	p = a;	//�迭 a�� ���� �ּҰ��� p���� �Ѱ��ش�.
	//p�� �迭�� ����Ű�� ������ ���������� �迭ó�� ���
	//a = p + 1;-----�����߻�(�迭�� �̸�(a)�� �ּҰ��� ��Ÿ���� ����̴�.

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		printf("a[%d]=%d\t", i, *(p + i));
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, *(&a [i]));
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, a[i]);
	}
	printf("\n");
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("a[%d]=%d\t", i, p[i]);
	}
}
#include <stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int* p;
	p = a;

	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("p + %d = %d\n", i, *(p + i));
	}
	printf("\n");
	//�ּҰ� ����ϰ� �ּҴ� 4�� �����Ѵ�. 
	//�ֳ��ϸ� int�� �̱� ����
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("��x �ּ�  = %p\n", (p + i));
	}
}
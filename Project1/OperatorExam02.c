#include <stdio.h>

void main()
{
	int a, b, c = 0;
	a = ++c; //c�� ���� 1������ �Ŀ� �� ���� a�� �����Ѵ�.
	printf("%d\n", c);
	b = c++; //c�� ���� b�� ������ �Ŀ� 1�����Ѵ�.
	printf("%d\n", c);
	printf("%d %d %d\n", a, b, ++c);

	return 0;
}
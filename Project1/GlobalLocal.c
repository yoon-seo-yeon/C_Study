#include <stdio.h>
int ham(int a);

int main()
{
	int a = 2;
	{
		int a = 4;
		printf("%d\n", a);		//���⼭ a�� {}���� �ִ� ������ �����Ѵ�.
	} //	{}�� ����� ������ a=4���忡�� a������ �����ȴ�.
	
	ham(a);		//a=2�� ���̴�.
	printf("%d\n", a);

	return 0;
}
int ham(a)		//a=2
{
	a = a + 10;		//a=12
	printf("%d\n", a);		//12���

	return a;
}
#include <stdio.h>	//��ó���Ⱑ ó���� �մϴ�

//void add(int x, int y);		//�Լ�����
void add(int , int );		//�Լ�����
//�Ϲ� �Լ��� main()�Լ����� �ؿ� ���� ��쿡��
//�ݵ�� �Լ��� �����ؾ� �Ѵ�

int main()
{
	add(1, 2);
	add(3, 4);
	add(5, 6);
	add(7, 8);

	return 0;
}
//void �̿��� �ڷ���(char, int, float, double, ...)�� ���� 
//�ݵ�� return�� ����ؾ� �Ѵ�

//�Լ� ����
void add(int x, int y) {	//���ϰ��� ���� ���
	int z;
	z = x + y;
	printf("%3d\n", z);

	//return;
}
// two_dimensional_array_init.c
#include <stdio.h>

int main()
{
	int numArr[3][4] = { 0, };		//2���� �迭�� ��Ҹ� ��� 0���� �ʱ�ȭ

	printf("%d\t", numArr[0][0]);		//0 : ���� �ε��� 0, ���� �ε��� 0�� ��� ���
	printf("%d\t", numArr[1][2]);		//0 : ���� �ε��� 1, ���� �ε��� 2�� ��� ���
	printf("%d\t", numArr[2][0]);		//0 : ���� �ε��� 2, ���� �ε��� 0�� ��� ���
	printf("%d\n", numArr[2][3]);		//0 : ���� �ε��� 2, ���� �ε��� 3�� ��� ���

	return 0;
}
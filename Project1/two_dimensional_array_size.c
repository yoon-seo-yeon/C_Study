// two_dimensional_array_size.c
#include <stdio.h>

void main()
{
	int numArr[3][4] = {		//����ũ��3, ����ũ��4�� int�� 2���� �迭 ����
		{11,22,33,44},
		{55,66,77,88},
		{99,110,121,132}
	};
	printf("%d\t", sizeof(numArr));
							//4����Ʈ ũ���� ��Ұ� 12(4*3)���̹Ƿ� 48
	int col = sizeof(numArr[0]) / sizeof(int);
			//4 : 2���� �迭�� ���� ũ�⸦ ���� ����
			//���� �� ���� ũ�⸦ ����� ũ��� ������
	int row = sizeof(numArr) / sizeof(numArr[0]);
			//2���� �迭�� ���� ũ�⸦ ���� ����
			//�迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������
	printf("%d\t", col);		//4
	printf("%d\n", row);	//3
}
#include <stdio.h>

//��ü �Լ����� ����ü ��� 
//struct HAP {
//	int a, b;
//};

void main()
{		 
	//main�Լ� �ȿ����� ����ü ���
	struct HAP {
	int a, b;
	};
	struct HAP sum;
	int hapgae;
	printf("�� �� �Է� : ");
	scanf("%d%d", &sum.a, &sum.b);
	hapgae = sum.a + sum.b;
	printf("�հ� : %d\n", hapgae);
}
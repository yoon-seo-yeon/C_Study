#include <stdio.h>
void main()
{
	int cap;
	printf("���� ������ ������ ?(1. �̱�, 2. �Ϻ�, 3. �븸)\n");
	scanf("%d", &cap);
	switch (cap)
	{
	case 1: printf("�̱� : ������ D.C. \n"); break;
	case 2: printf("�Ϻ� : ���� \n"); break;
	case 3: printf("�븸 :  Ÿ�̻��� \n"); break;
	default: printf("�Է� �����Դϴ�.\n");
	}
	
}
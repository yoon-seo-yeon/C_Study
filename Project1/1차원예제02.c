#include <stdio.h>

int main()
{
	int a[3], i;							//�迭�� ������ ����
	for (i = 0; i < 3; i++) {		//for �ݺ���
		scanf("%d", &a[i]);		//ǥ�� �Է� �Լ��� �Է�
	}
	printf("a�� ��ڰ� ���: ");	//��¹�
	for (i = 0; i < 3; i++) {		//for �ݺ���
		printf("%2d", a[i]);		//a[i] ��ڰ� ���
	}
	printf("\n");						//�� �ٲٱ� ���
	return 0;
}
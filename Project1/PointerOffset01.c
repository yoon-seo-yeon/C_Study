#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	int* pnData = NULL;	//NULL�� stdio.h���Ͽ� 0������ ����

	pnData = (int*)malloc(sizeof(int) * 4);
	//malloc()�� memory allocation�� ���� heap������
	//�������� �Ҵ�(4����Ʈ 4�� 16����Ʈ)

	memset(pnData, 65, sizeof(int) * 4);
	// memory set�Լ��� ������ 4���� 65���� ����

	printf("%p\n", pnData);
	printf("%p\n", pnData+1);
	printf("%p\n", pnData+2);
	printf("%p\n", pnData+3);

	for (int i = 0; i < 4; i++)
		printf("%c\t", pnData[i]);
}

#include <stdio.h>
#define print(n) printf("%d\n", n);
//define�� ��ũ�θ� ����� ������ print(n)�� ������
//������ printf("%d\n", n); �������� �����Ϸ��� ��ȯ�����ش�.

void main()
{
	FILE* pFile = fopen("text.txt", "w");

	if (pFile == NULL) {
		printf("������ ������ �� �� �����ϴ�");
	}

	else
	{
		print(ftell(pFile));	//--->print("%d\n",ftell(pFile));�� ����ȴ�
		//fopen�Ŀ� ���� ������ ��ġȮ��

		fputs("0123456789", pFile);	 //fputs() ���� ���Ŀ� ������ ��ġ Ȯ��
		print(ftell(pFile));

		fseek(pFile, 0L, SEEK_SET);	 //ó�� ��ġ�� ����
		print(ftell(pFile));

		fseek(pFile, 6L, SEEK_SET);	 //ó�� ��ġ���� 6��° ����
		print(ftell(pFile));

		fseek(pFile, -2L, SEEK_CUR);	 //���� ��ġ(6)���� 2�� ������ �̵�
		print(ftell(pFile));

		fseek(pFile, -1L, SEEK_END);	 //������ ������ �̵��� �Ŀ� 1ĭ ������ �̵�
		print(ftell(pFile));

		fclose(pFile);
	}
}
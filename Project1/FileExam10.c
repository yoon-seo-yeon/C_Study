#include <stdio.h>

int main()
{
	char a;
	FILE* pFile = fopen("mystory.txt", "rt"); //rt�� �ؽ�Ʈ ������ �б� ���

	if (pFile == NULL) {
		printf("��Ʈ�� ������ �����߻�");
		return 1;	//���α׷� ����
	}

	while (1)	  //���ѹݺ�
	{
		if (feof(pFile) != 0) {
			printf("������ ���� �����߽��ϴ�\n");	  
			break;	 //while�� Ż��
		}
		a = fgetc(pFile);	//pFile ���������Ͱ� ����Ű�� �׽�Ʈ ����(mystory.txt)
		//ó������ 1���ھ� �о a�� ����
		printf("%c", a);
	}
	fclose(pFile);
}
#include <stdio.h>

void main()
{
	FILE *fp1;
	FILE* fp2;

	char f1[100], f2[100];
	char buf[100];

	fp1 = fopen("test9-6.txt", "r");
	fp2 = fopen("test9-7.txt", "w");

	if (fp1 == NULL)
		printf("���������� �� �� �����ϴ�.\n");

	while (fgets(buf, 100, fp1) != NULL)	
	//fgets()�� fgetc()���� �ӵ��� �ξ� ������.
	//fp1�� ����Ű�� 	"test9-6.txt" ������ ������
	//100����Ʈ�� �о �ӽ� ��� ������ buf�� ����	�Ѵ�.
	//������ ������ �о NULL�� �ƴϸ� ��
	//���̻� ������ ������  NULL�� ����ȴ�.
	//fgets() �Լ��� ������ ���� �����ϸ� NULL���� ��ȯ�Ѵ�
	{
		fputs(buf, fp2);  //fputs() �Լ��� fputc()���� �ӵ��� �ξ� ������.
		//buf�� ����� �����͸� fp2�� ����Ű�� "test9-7.txt"���Ͽ�
		//��µȴ�.
	}

	fclose(fp2);
	fclose(fp1);
}
#include <stdio.h>

void main()
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	int c;

	fp1 = fopen("test9-4.txt", "r");
	//"test9-4.txt" ������ ���� ������ �ּҰ��� fp1�� ������ �ȴ�.
	//������ �����ؾ� �ǰ�
	//"r"���� �������� �ִ�.

	fp2 = fopen("test9-5.txt", "w");
	//"test9-5.txt" ������ ���� ������ �ּҰ��� fp2�� ������ �ȴ�.
	//������ ������ �ڵ����� ������ ����� �ش�.
	//"w"���� ������ �� �� �ִ�.	

	if (fp1 == NULL)
		printf("�������� ���� ����\n");

	if (fp2 == NULL)
		printf("�������� ���� ����\n");

	printf("fgetc() ������\n");
	while ((c = getc(fp1)) != EOF)	  //End of File
	//getc() �Լ��� ������ �� ���� �����ϸ� EOF���� ��ȯ�Ѵ�.
	//fp1�� "test9-7.txt"������ ù��° ���ڸ� �о
	//c���� �Ѱ��ش�. c�� ���� EOF(������ ��)�̸�
	//while �ݺ����� ����ȴ�.
	{
		putchar(c);		 //ȭ�鿡 ���
		fputc(c, fp2);		//fp2�� ����Ű�� "text9-5.txt" ���Ͽ� c�� ���� ����Ѵ�.
	}
	printf("\n");
	fclose(fp1); fclose(fp2);	 //������ �ݾ��ش�
	//���������� ������ �����ش�
}
#include <stdio.h>

void main()
{
	FILE* fp1;
	FILE* fp2;

	char buf[100];

	fp1 = fopen("test9-7copy.txt", "r");
	fp2 = fopen("test9-7.txt", "a");   //���� ���� ���뿡�� �߰��Ѵ�

	if (fp1 == NULL)
		printf("���������� �� �� �����ϴ�.\n");

	while (fgets(buf, 100, fp1) != NULL)
	{
		fputs(buf, fp2);   
	}

	fclose(fp2);
	fclose(fp1);
}
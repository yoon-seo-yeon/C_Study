#include <stdio.h>

void main()
{
	FILE* fp=NULL;
	int kor, eng, mat, hap;
	float avg; //���	  
	char num[6], name[8];

	fp = fopen("test9-10.txt", "r");

	//if (fp = NULL)
	//	printf("���� ������ �� �� �����ϴ�.");

	printf("====================================================\n");
	printf("�й�     �̸�    ����    ����    ����    ����    ���\n");
	printf("====================================================\n");

	for (int i = 0; i < 5; i++) 
	{
		fscanf(fp, "%s%s%d%d%d", num, name, &kor, &eng, &mat);
		//fp�� ����Ű�� ����(test9-10.txt)�� ����Ű�� ���� �������̰� ������
		//ó�� ��ġ�� ����Ų��. 
		//�����͸� �а� �� �Ŀ��� �� �������� ó�� ��ġ�� �ڵ������� ����Ų��
		hap = kor + eng + mat;
		avg = (float)hap / 3;
		printf("%-6s %6s   %3d    %3d    %3d    %4d    %7.2f\n", num, name, kor, eng, mat, hap, avg);
	}
	close(fp);
}												
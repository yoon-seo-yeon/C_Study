#include <stdio.h>

void main()
{
	FILE* fp = NULL;
	int kor, number;
	char name[10];

	fp = fopen("test9-11.txt", "w");  //w=write ������ ��
	if (fp == NULL) {
		printf("������ ���������� �� �� �����ϴ�.");
		exit(1);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d�� �̸� ���� ���� �Է� \n", i+1);
		printf("�й� : "); scanf("%d", &number);
		printf("�̸� : "); scanf("%s", &name);
		printf("�������� : "); scanf("%d", &kor);
		fprintf(fp, "%d %s %d\n", number, name, kor);
	}
	fclose(fp);
	fp = fopen("test9-11.txt", "r");   //r=read��� ��
	if (fp == NULL) {
		printf("������ ���������� �� �� �����ϴ�.");
		exit(1);
	}
	printf("�й�   �̸�   ���� \n");
	printf("=====================\n");

	for (int i = 0; i < 3; i++) {
		fscanf(fp, "%d %s %d\n", &number, name, &kor);
		printf("%d %s %d\n", number, name, kor);
	}
	fclose(fp);
}
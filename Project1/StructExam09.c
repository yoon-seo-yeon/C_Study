#include <stdio.h>

struct student
{
	int number;
	char name[10];
	int kor, eng, mat, sum;
	float avg;
};

void main()
{
	struct student list[3] = {
		{20101, "���ö", 35, 10, 20, 30},
		{20102, "ȫ�浿", 40, 40, 50, 60},
		{20103, "������", 25, 70, 80, 90}
	};
	struct student* p;
	p = list;

	printf("\n\t\t�� �� ǥ\n");
	printf("�й�   �̸�     ����   ����     ����   ����   ���\n");
	printf("=================================================\n");

	for (int i = 0; i < 3; i++, p++) {	  //*p=list[0]
		//*p�� list[0]�� �����̴�. ���� *p�� list[0]�� ����
		(*p).sum = (*p).kor + (*p).eng + (*p).mat;
		(*p).avg = (*p).sum;
		printf("%d   %s    %d     %d      %d      %d     %.2f\n",
			(*p).number, (*p).name, (*p).kor, (*p).eng, (*p).mat, (*p).sum, (*p).avg);
	}
}
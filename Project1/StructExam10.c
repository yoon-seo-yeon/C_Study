#include <stdio.h>

struct student		//��� ������ ���
{
	int number;
	char name[10];
	int kor, eng, mat, sum;
	float avg;
};

void sungska(struct student pp)		//pp�� ����ü �Ű����� 
{
	printf("\n\t\t�� �� ǥ\n");
	printf("�й�   �̸�     ����   ����     ����   ����     ���\n");
	printf("=====================================================\n");
	printf("%d   %s    %d     %d      %d      %d     %.2f\n",
		pp.number, pp.name, pp.kor, pp.eng, pp.mat, pp.sum, pp.avg);
}

void main()
{
	struct student list[3] = {
		{20101, "���ö", 35, 10, 20, 30},
		{20102, "ȫ�浿", 40, 40, 50, 60},
		{20103, "������", 25, 70, 80, 90}
	};
	struct student* pp;		//pp�� ����ü 
	pp = list;

	for (int i = 0; i < 3; i++, pp++) {	
		pp->sum = pp->kor + pp->eng + pp->mat;
		pp->avg = pp->sum/3.0;
		sungska(list[i]);	 //sungsak()�Լ����� list[0], list[1], list[2]�� 
		//������ ����ü�� �Ѱ��ش�. �޴� �Լ��� �Ű������� 
		//����ü �����̾�� �Ѵ�.
	}
}
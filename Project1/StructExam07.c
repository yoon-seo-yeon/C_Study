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
	struct student list[3];		 //����ü �迭 ���� 

	for (int i = 0; i < 3; i++) {
		printf("�й��� �Է��Ͻÿ�(����) : ");
		scanf("%d", &list[i].number);

		printf("�̸��� �Է��Ͻÿ�(���ڿ�) : ");
		scanf("%s", &list[i].name);

		printf("���� ������ �Է��Ͻÿ�(����) : ");
		scanf("%d", &list[i].kor);

		printf("���� ������ �Է��Ͻÿ�(����) : ");
		scanf("%d", &list[i].eng);

		printf("���� ������ �Է��Ͻÿ�(����) : ");
		scanf("%d", &list[i].mat);

		printf("==================\n");

		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / 3.0;
	}
	printf("\n\t\t�� �� ǥ\n");
	printf("�й�   �̸�     ����   ����     ����   ����   ���\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d   %s    %d     %d      %d      %d     %.2f\n",
			list[i].number, list[i].name, list[i].kor, list[i].eng, list[i].mat, list[i].sum, list[i].avg);
	}
}
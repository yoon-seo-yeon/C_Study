#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int charge = 1000;		//���
	int i, j;
	int startstation = 0;	//����� �Ÿ�
	int endstation = 0;		//������ �Ÿ�
	int ret = 0;				//�ݺ��ϱ� ���� ����
	int distance;				//�Ÿ� = ��߿�-������

	const char start[20] = "";	//��߿� �Է�
	printf("��߿� : ");
	scanf("%s", &start);

	const char end[20] = "";		//������ �Է�
	printf("������ : ");
	scanf("%s", &end);

	int a[10] = { 0,13,24,35,46,57,68,79,82,93 };
	char b[][6] = { "�Ÿ�", "��õ", "���", "���", "����", "����", "����", "����", "����", "�Ｖ" };

	//strcmp �Լ��� ����ؼ� ��߿� ��
	for (int i = 0, j = -1; i < 6; i++) {
		int ret = strcmp(start, b[i]);
		if (ret == -1 && i == 10) {
			printf("  ��߿��� �����ϴ�.");
			printf("  �ٽ� �Է� �ϼ���.");
			printf("��߿� : ");
			scanf("%s", &start);
			i = 0;
		}
		else if (ret == 0) {
			startstation = a[i];
			printf("��߿� : %d", i);
			break;
		}
	}

	//strcmp �Լ��� ����ؼ� ������ ��
	for (int i = 0, j = -1; i < 6; i++) {
		int ret = strcmp(end, b[i]);
		if (ret == -1 && i == 5) {
			printf("  �������� �����ϴ�.");
			printf("  �ٽ� �Է� �ϼ���.");
			printf("������ : ");
			scanf("%s", &end);
			i = 0;
		}
		if (ret == 0) {
			endstation = a[i];
			printf("������ : %d", i);
			break;
		}
	}
}
	/*
	distance(startstation - endstation);
	//��� ����ϴ� ���α׷� �ۼ�
	int total;
	if (distance(startstation - endstation) >20) {
		total = (charge + (distance(startstation - endstation) - 20) * 300);
	}
	else if (distance(startstation - endstation) <= 20) {
		total = charge;
	}
	printf("����� %d �Դϴ�.", total);
	
	return 0;
}
*/
#include <stdio.h>

struct student {
	int num;
	char* name;
	float kor;
	float mat;
};
//����ü ���� ����� ���ÿ� ���� �ʱ�ȭ ��Ų��
struct student st1 = { 10201, "kim dong su", 50.0, 60.0 };
struct student st2 = { 10202, "lee chealsu", 30.0, 40.0 };


void main()
{
	printf("\n�й�\t����\t\t����\t����\n");
	printf("%d\t%s\t%.2f\t%.2f", st1.num, st1.name, st1.kor, st1.mat);
	printf("%d\t%s\t%.2f\t%.2f", st2.num, st2.name, st2.kor, st2.mat);
}

#include <stdio.h>

struct student {
	int num;
	char* name;
	float kor;
	float mat;
}st1, st2; //st1�� st2�� student�� ����ü �����̴�.

void main()
{
	//struct student st1, st2; --- st1�� st2�� student�� ����ü �����̴�.
	st1.num = 10201;
	st1.name = "kim dong su";
	st1.kor = 50.0;
	st1.mat = 60.0;
	st2.num = 10202;
	st2.name = "lee chealsu";
	st2.kor = 30.0;
	st2.mat = 40.0;
	printf("\n�й�\t����\t\t����\t����\n");
	printf("%d\t%s\t%.2f\t%.2f", st1.num, st1.name, st1.kor, st1.mat);
	printf("%d\t%s\t%.2f\t%.2f", st2.num, st2.name, st2.kor, st2.mat);
}

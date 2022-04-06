#include <stdio.h>

struct student {
	int num;
	char* name;
	float kor;
	float mat;
}st1, st2; //st1과 st2는 student형 구조체 변수이다.

void main()
{
	//struct student st1, st2; --- st1과 st2는 student형 구조체 변수이다.
	st1.num = 10201;
	st1.name = "kim dong su";
	st1.kor = 50.0;
	st1.mat = 60.0;
	st2.num = 10202;
	st2.name = "lee chealsu";
	st2.kor = 30.0;
	st2.mat = 40.0;
	printf("\n학번\t성명\t\t국어\t수학\n");
	printf("%d\t%s\t%.2f\t%.2f", st1.num, st1.name, st1.kor, st1.mat);
	printf("%d\t%s\t%.2f\t%.2f", st2.num, st2.name, st2.kor, st2.mat);
}

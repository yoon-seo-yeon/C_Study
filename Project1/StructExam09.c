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
		{20101, "김수철", 35, 10, 20, 30},
		{20102, "홍길동", 40, 40, 50, 60},
		{20103, "갑순이", 25, 70, 80, 90}
	};
	struct student* p;
	p = list;

	printf("\n\t\t성 적 표\n");
	printf("학번   이름     국어   영어     수학   총점   평균\n");
	printf("=================================================\n");

	for (int i = 0; i < 3; i++, p++) {	  //*p=list[0]
		//*p는 list[0]의 내용이다. 따라서 *p와 list[0]는 같다
		(*p).sum = (*p).kor + (*p).eng + (*p).mat;
		(*p).avg = (*p).sum;
		printf("%d   %s    %d     %d      %d      %d     %.2f\n",
			(*p).number, (*p).name, (*p).kor, (*p).eng, (*p).mat, (*p).sum, (*p).avg);
	}
}
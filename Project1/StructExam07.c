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
	struct student list[3];		 //구조체 배열 변수 

	for (int i = 0; i < 3; i++) {
		printf("학번을 입력하시오(정수) : ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하시오(문자열) : ");
		scanf("%s", &list[i].name);

		printf("국어 점수를 입력하시오(정수) : ");
		scanf("%d", &list[i].kor);

		printf("영어 점수를 입력하시오(정수) : ");
		scanf("%d", &list[i].eng);

		printf("수학 점수를 입력하시오(정수) : ");
		scanf("%d", &list[i].mat);

		printf("==================\n");

		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / 3.0;
	}
	printf("\n\t\t성 적 표\n");
	printf("학번   이름     국어   영어     수학   총점   평균\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%d   %s    %d     %d      %d      %d     %.2f\n",
			list[i].number, list[i].name, list[i].kor, list[i].eng, list[i].mat, list[i].sum, list[i].avg);
	}
}
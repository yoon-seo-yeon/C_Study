#include <stdio.h>

struct student		//멤버 변수만 사용
{
	int number;
	char name[10];
	int kor, eng, mat, sum;
	float avg;
};

void sungska(struct student pp)		//pp는 구조체 매개변수 
{
	printf("\n\t\t성 적 표\n");
	printf("학번   이름     국어   영어     수학   총점     평균\n");
	printf("=====================================================\n");
	printf("%d   %s    %d     %d      %d      %d     %.2f\n",
		pp.number, pp.name, pp.kor, pp.eng, pp.mat, pp.sum, pp.avg);
}

void main()
{
	struct student list[3] = {
		{20101, "김수철", 35, 10, 20, 30},
		{20102, "홍길동", 40, 40, 50, 60},
		{20103, "갑순이", 25, 70, 80, 90}
	};
	struct student* pp;		//pp는 구조체 
	pp = list;

	for (int i = 0; i < 3; i++, pp++) {	
		pp->sum = pp->kor + pp->eng + pp->mat;
		pp->avg = pp->sum/3.0;
		sungska(list[i]);	 //sungsak()함수에게 list[0], list[1], list[2]를 
		//순서로 구조체를 넘겨준다. 받는 함수의 매개변수도 
		//구조체 변수이어야 한다.
	}
}
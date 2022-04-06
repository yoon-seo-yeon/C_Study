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

	for (int i = 0; i < 3; i++, p++) {	//p는 student구조체를 가리키는 포인터 변수이기 때문에 p++하면 구조체 단위로 p값은 증가한다
		//i=0일때 p=list(첫 번째 구조체 데이터), 
		//i=1일때 p++을 하면 p=list+1(두 번째 구조체 데이터),
		//i=2일때 p++을 하면 p=list+2(세 번째 구조체 데이터),
		p->sum = p->kor + p->eng + p->mat;
		p->avg = p->sum;
		printf("%d   %s    %d     %d      %d      %d     %.2f\n",
			p->number, p->name, p->kor, p->eng, p->mat, p->sum, p->avg);
	}
}
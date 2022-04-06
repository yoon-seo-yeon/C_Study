#include <stdio.h>

//가능하면 외부에서 구조체 틀을 만드는 것이 좋다.
struct MyStruct
{
	char* name;
	int age;
	char* num;
};//list[3];--->list[0], list[1], list[2] 이 생성된다.


void main()
{
	struct MyStruct list[3] = {	   //list[3]은 MyStruct 구조체 배열 변수이다.
		{"김수철", 35, "345-6789"},
		{"홍길동", 40, "123-4567"},
		{"갑순이", 25, "212-3232"}
	};
	printf("\n 직장 전화번호 \n");
	printf("성명\t나이\t전화번호\n");
	printf("=========================\n");
	printf("%s\t%d\t%s\n", list[0].name, list[0].age, list[0].num);
	printf("%s\t%d\t%s\n", list[1].name, list[1].age, list[1].num);
	printf("%s\t%d\t%s\n", list[2].name, list[2].age, list[2].num);
}
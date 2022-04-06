#include <stdio.h>

union student	   //4바이트의 공간에 number, name, age을 같이 사용하는 개념이다.
{
	int number;	//4바이트
	char* name;	//4바이트
	int age;			//4바이트
};

void main()
{
	union student list;

	printf("list의 크기 : %d", sizeof(list));
	
	list.number = 20101;
	printf("\n 번호 : %d, 이름 : %c, 나이 : %d\n",
		list.number, list.name, list.age);

	list.name = "홍길동";
	printf("\n 번호 : %d, 이름 : %s, 나이 : %d\n",
		list.number, list.name, list.age);

	list.age = 17;
	printf("\n 번호 : %d, 이름 : %d, 나이 : %d\n",
		list.number, list.name, list.age);
}
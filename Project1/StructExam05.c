#include <stdio.h>

//가능하면 외부에서 구조체 틀을 만드는 것이 좋다.
struct MyStruct
{
	char* name;
	int age;
	char* num;
};


void main()
{
	struct MyStruct list = { "김수철", 35, "345-6789" };
	//list 변수 선언과 동시에 값을 초기화 
	printf("\n 전화번호 \n");
	printf("성명 : %s\n", list.name);
	printf("나이 : %d\n", list.age);
	printf("전화번호 : %s\n", list.num);
}
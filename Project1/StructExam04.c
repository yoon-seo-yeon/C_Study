#include <stdio.h>
//가능하면 외부에서 구조체 틀을 만드는 것이 좋다.
/*
struct MyStruct
{
	char* name;
	int age;
	char* num;
};
*/

void main()
{
	//구조체를 main()함수 안에 정의하면 main()
	//함수에서만 구조체를 사요알 수 있다.
	struct MyStruct	 //Student student=new Student()
	{
		char* name;
		int age;
		char* num;
	};
	struct MyStruct list;	//list는 myStruct구조형이 구조체 변수이다.
	list.name="김수철";
	list.age = 35;
	list.num = "345-6789";

	printf("\n 전화번호 \n");
	printf("성명 : %s\n", list.name);
	printf("나이 : %d\n", list.age);
	printf("전화번호 : %s\n", list.num);
}
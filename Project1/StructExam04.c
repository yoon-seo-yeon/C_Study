#include <stdio.h>
//�����ϸ� �ܺο��� ����ü Ʋ�� ����� ���� ����.
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
	//����ü�� main()�Լ� �ȿ� �����ϸ� main()
	//�Լ������� ����ü�� ���� �� �ִ�.
	struct MyStruct	 //Student student=new Student()
	{
		char* name;
		int age;
		char* num;
	};
	struct MyStruct list;	//list�� myStruct�������� ����ü �����̴�.
	list.name="���ö";
	list.age = 35;
	list.num = "345-6789";

	printf("\n ��ȭ��ȣ \n");
	printf("���� : %s\n", list.name);
	printf("���� : %d\n", list.age);
	printf("��ȭ��ȣ : %s\n", list.num);
}
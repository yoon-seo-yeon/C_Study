#include <stdio.h>

//�����ϸ� �ܺο��� ����ü Ʋ�� ����� ���� ����.
struct MyStruct
{
	char* name;
	int age;
	char* num;
};


void main()
{
	struct MyStruct list = { "���ö", 35, "345-6789" };
	//list ���� ����� ���ÿ� ���� �ʱ�ȭ 
	printf("\n ��ȭ��ȣ \n");
	printf("���� : %s\n", list.name);
	printf("���� : %d\n", list.age);
	printf("��ȭ��ȣ : %s\n", list.num);
}
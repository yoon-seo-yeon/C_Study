#include <stdio.h>

//�����ϸ� �ܺο��� ����ü Ʋ�� ����� ���� ����.
struct MyStruct
{
	char* name;
	int age;
	char* num;
};//list[3];--->list[0], list[1], list[2] �� �����ȴ�.


void main()
{
	struct MyStruct list[3] = {	   //list[3]�� MyStruct ����ü �迭 �����̴�.
		{"���ö", 35, "345-6789"},
		{"ȫ�浿", 40, "123-4567"},
		{"������", 25, "212-3232"}
	};
	printf("\n ���� ��ȭ��ȣ \n");
	printf("����\t����\t��ȭ��ȣ\n");
	printf("=========================\n");
	printf("%s\t%d\t%s\n", list[0].name, list[0].age, list[0].num);
	printf("%s\t%d\t%s\n", list[1].name, list[1].age, list[1].num);
	printf("%s\t%d\t%s\n", list[2].name, list[2].age, list[2].num);
}
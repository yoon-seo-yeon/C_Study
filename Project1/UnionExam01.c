#include <stdio.h>

union student	   //4����Ʈ�� ������ number, name, age�� ���� ����ϴ� �����̴�.
{
	int number;	//4����Ʈ
	char* name;	//4����Ʈ
	int age;			//4����Ʈ
};

void main()
{
	union student list;

	printf("list�� ũ�� : %d", sizeof(list));
	
	list.number = 20101;
	printf("\n ��ȣ : %d, �̸� : %c, ���� : %d\n",
		list.number, list.name, list.age);

	list.name = "ȫ�浿";
	printf("\n ��ȣ : %d, �̸� : %s, ���� : %d\n",
		list.number, list.name, list.age);

	list.age = 17;
	printf("\n ��ȣ : %d, �̸� : %d, ���� : %d\n",
		list.number, list.name, list.age);
}
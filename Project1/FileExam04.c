#include <stdio.h>

void main()
{
	FILE* fp;
	char ch;

	fp = fopen("test9-8.txt", "w");		 //"test9-8.txt" ������ fp������ ������ ����Ŵ

	for (int a = 100, ch = 'A'; a <= 500; a += 100, ch++)
	{
		fprintf(fp, "���� = %c, ��ȣ = %d\n", ch, a);
		//fp�� ����Ű�� "test9-8.txt"���Ͽ� ����Ѵ�
		printf("���� = %c, ��ȣ = %d\n", ch, a);	 //ȭ�鿡 ���
	}
}
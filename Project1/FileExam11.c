#include <stdio.h>

void main()
{
	char tmp[10];
	FILE* fp = fopen("test9-13.txt", "r");
	//fp�� "test9-13.txt"������ ����Ű�� ���� �������̰� �б� ����̴�.

	fgets(tmp, 3, fp);	 //fp��Ʈ������ NULL���� 3byte�� �J��� tmp�� ����
	printf("%s\n", tmp);

	fseek(fp, 4, 0);  //������ ó�� ��ġ���� 4byte ������ ��ġ�� �̵�
	//fseek(fp,4,SEEK_SET); SEEK_SET �� 0������ �����Ǿ� �ִ�.
	fgets(tmp, 4, fp);
	printf("%s\n", tmp);

	fseek(fp, 5, SEEK_CUR);	 //���� ��ġ���� 5byte ������ ��ġ�� �̵�, SEEK_CUR(1)
	fgets(tmp, 5, fp);		 //fp�� ����Ű�� ��ġ�� 4byte�� NULL�����ؼ� 5����Ʈ�� tmp�� �����Ѵ�.
	//SEEK_CUR �� 1������ �����Ǿ� �ִ�.
	printf("%s\n", tmp);

	fseek(fp, -9, SEEK_END);  //������ ������ -9byte ������ ��ġ�� �̵�, SEEK_END(2)
	fgets(tmp, 10, fp);	  //SEEK_END�� 2������ �����Ǿ� �ִ�.
	printf("%s\n", tmp);
}
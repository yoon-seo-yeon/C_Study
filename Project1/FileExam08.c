#include <stdio.h>

void main()
{
	//FILE* pFile;
	//pFile = fopen("example.txt", "w");
	FILE* pFile = fopen("example.txt", "w");
	fputs("This is an apple.", pFile);
	//pFile�� ������ ó�� ��ġ�� ����Ű�� ���� �������̴�

	fseek(pFile, 9, SEEK_SET);		//fseek Ž���̶�� ��
	//pFile�� ����Ű�� ���� ���忭�� ó������ 9��° ��ġ�� ����Ų��
	//SEEK_SET(������)�� ó������ ����
	fputs(" sam", pFile);

	fclose(pFile);
}
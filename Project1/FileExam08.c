#include <stdio.h>

void main()
{
	//FILE* pFile;
	//pFile = fopen("example.txt", "w");
	FILE* pFile = fopen("example.txt", "w");
	fputs("This is an apple.", pFile);
	//pFile이 파일의 처음 위치를 가리키는 파일 포인터이다

	fseek(pFile, 9, SEEK_SET);		//fseek 탐색이라는 뜻
	//pFile이 가리키는 파일 문장열의 처음부터 9번째 위치를 가리킨다
	//SEEK_SET(기준점)는 처음부터 시작
	fputs(" sam", pFile);

	fclose(pFile);
}
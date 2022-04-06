#include <stdio.h>

void main()
{
	char* apszList[3] = { "Test", "String", "Data" };
	char** ppszList = apszList;

	char szBuffer[32] = { "TestString" };
	char* pszBuffer = szBuffer;

	printf("%c\n", **apszList);
	printf("%c\n", *apszList[1]);
	printf("%c\n", *pszBuffer);

	printf("%s\n", apszList[0]);
	printf("%s\n", *(ppszList+1));
}
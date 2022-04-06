#include <stdio.h>
#include <string.h>

void main()
{
	const char start[20] = "";	//출발역
	const char ebdt[20] = "";	//도착역

	char b[][6] = { "신림", "봉천", "방배", "삼성" };

	printf("출발역 : ");
	scanf("%s", start);

	for (int i = 0; i < 4; i++)
		if (strcmp(start, b[0]))

	//return 0;

	//int ret = strcmp(start, b[0]);

	//printf("%d\n", ret);
}
#include <stdio.h>

void main()
{
	FILE* fp1;
	FILE* fp2;

	char buf[100];

	fp1 = fopen("test9-7copy.txt", "r");
	fp2 = fopen("test9-7.txt", "a");   //기존 파일 내용에서 추가한다

	if (fp1 == NULL)
		printf("원본파일을 열 수 없습니다.\n");

	while (fgets(buf, 100, fp1) != NULL)
	{
		fputs(buf, fp2);   
	}

	fclose(fp2);
	fclose(fp1);
}
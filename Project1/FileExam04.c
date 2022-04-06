#include <stdio.h>

void main()
{
	FILE* fp;
	char ch;

	fp = fopen("test9-8.txt", "w");		 //"test9-8.txt" 파일을 fp포인터 변수가 가리킴

	for (int a = 100, ch = 'A'; a <= 500; a += 100, ch++)
	{
		fprintf(fp, "문자 = %c, 번호 = %d\n", ch, a);
		//fp가 가리키는 "test9-8.txt"파일에 출력한다
		printf("문자 = %c, 번호 = %d\n", ch, a);	 //화면에 출력
	}
}
#include <stdio.h>

void main()
{
	int ch;
	
	while (1)
	{
		ch = fgctc(stdin);	  //stdin은 standard input의 약자로 화면(콘솔)으로 부터 입력
		if (ch == EOF)	//EO(-1)F파일의 끝	 CTRL+C
			break;	 //반복문 종료 
		fputc(ch, stdout);
		//stdin은 standard output의 약자로 화면(콘솔)으로 부터 입력
	}
}
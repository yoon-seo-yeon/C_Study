#include <stdio.h>

void main()
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	int c;

	fp1 = fopen("test9-4.txt", "r");
	//"test9-4.txt" 파일을 열고 파일의 주소값을 fp1이 가지게 된다.
	//파일이 존재해야 되고
	//"r"모드는 읽을수만 있다.

	fp2 = fopen("test9-5.txt", "w");
	//"test9-5.txt" 파일을 열고 파일의 주소값을 fp2가 가지게 된다.
	//파일이 없으면 자동으로 파일을 만들어 준다.
	//"w"모드는 파일을 쓸 수 있다.	

	if (fp1 == NULL)
		printf("원본파일 열기 실패\n");

	if (fp2 == NULL)
		printf("원본파일 열기 실패\n");

	printf("fgetc() 연습용\n");
	while ((c = getc(fp1)) != EOF)	  //End of File
	//getc() 함수는 파일의 맨 끝에 도달하면 EOF값을 반환한다.
	//fp1은 "test9-7.txt"파일을 첫번째 문자를 읽어서
	//c에게 넘겨준다. c의 값이 EOF(파일의 끝)이면
	//while 반복문은 종료된다.
	{
		putchar(c);		 //화면에 출력
		fputc(c, fp2);		//fp2가 가리키는 "text9-5.txt" 파일에 c의 값을 출력한다.
	}
	printf("\n");
	fclose(fp1); fclose(fp2);	 //파일을 닫아준다
	//파일포인터 연결을 끊어준다
}
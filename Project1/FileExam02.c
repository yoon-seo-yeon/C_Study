#include <stdio.h>

void main()
{
	FILE *fp1;
	FILE* fp2;

	char f1[100], f2[100];
	char buf[100];

	fp1 = fopen("test9-6.txt", "r");
	fp2 = fopen("test9-7.txt", "w");

	if (fp1 == NULL)
		printf("원본파일을 열 수 없습니다.\n");

	while (fgets(buf, 100, fp1) != NULL)	
	//fgets()는 fgetc()보다 속도가 훨씬 빠르다.
	//fp1이 가리키는 	"test9-6.txt" 파일의 내용을
	//100바이트를 읽어서 임시 기억 공간인 buf에 저장	한다.
	//파일의 내용을 읽어서 NULL이 아니면 참
	//더이상 내용이 없으면  NULL이 저장된다.
	//fgets() 함수는 파일의 끝에 도달하면 NULL값을 반환한다
	{
		fputs(buf, fp2);  //fputs() 함수는 fputc()보다 속도가 훨씬 빠르다.
		//buf에 저장된 데이터를 fp2가 가리키는 "test9-7.txt"파일에
		//출력된다.
	}

	fclose(fp2);
	fclose(fp1);
}
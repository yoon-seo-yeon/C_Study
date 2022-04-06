#include <stdio.h>

int main()
{
	char a;
	FILE* pFile = fopen("mystory.txt", "rt"); //rt는 텍스트 파일을 읽기 모드

	if (pFile == NULL) {
		printf("스트림 생성시 오류발생");
		return 1;	//프로그램 종료
	}

	while (1)	  //무한반복
	{
		if (feof(pFile) != 0) {
			printf("파일의 끝에 도달했습니다\n");	  
			break;	 //while문 탈출
		}
		a = fgetc(pFile);	//pFile 파일포인터가 가리키는 테스트 파일(mystory.txt)
		//처음부터 1문자씩 읽어서 a에 저장
		printf("%c", a);
	}
	fclose(pFile);
}
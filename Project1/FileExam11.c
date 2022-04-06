#include <stdio.h>

void main()
{
	char tmp[10];
	FILE* fp = fopen("test9-13.txt", "r");
	//fp는 "test9-13.txt"파일을 가리키는 파일 포인터이고 읽기 모드이다.

	fgets(tmp, 3, fp);	 //fp스트림에서 NULL포함 3byte를 긇어와 tmp에 저장
	printf("%s\n", tmp);

	fseek(fp, 4, 0);  //파일의 처음 위치에서 4byte 떨어진 위치로 이동
	//fseek(fp,4,SEEK_SET); SEEK_SET 은 0값으로 설정되어 있다.
	fgets(tmp, 4, fp);
	printf("%s\n", tmp);

	fseek(fp, 5, SEEK_CUR);	 //현재 위치에서 5byte 떨어진 위치로 이동, SEEK_CUR(1)
	fgets(tmp, 5, fp);		 //fp가 가리키는 위치에 4byte와 NULL포함해서 5바이트를 tmp에 저장한다.
	//SEEK_CUR 은 1값으로 설정되어 있다.
	printf("%s\n", tmp);

	fseek(fp, -9, SEEK_END);  //파일의 끝에서 -9byte 떨어진 위치로 이동, SEEK_END(2)
	fgets(tmp, 10, fp);	  //SEEK_END는 2값으로 설정되어 있다.
	printf("%s\n", tmp);
}
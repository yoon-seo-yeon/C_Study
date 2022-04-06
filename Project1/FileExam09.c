#include <stdio.h>
#define print(n) printf("%d\n", n);
//define은 매크로를 만드는 것으로 print(n)이 문장을
//만나면 printf("%d\n", n); 문장으로 컴파일러가 변환시켜준다.

void main()
{
	FILE* pFile = fopen("text.txt", "w");

	if (pFile == NULL) {
		printf("저장할 파일을 열 수 없습니다");
	}

	else
	{
		print(ftell(pFile));	//--->print("%d\n",ftell(pFile));로 변경된다
		//fopen후에 파일 포인터 위치확인

		fputs("0123456789", pFile);	 //fputs() 실행 이후에 포인터 위치 확인
		print(ftell(pFile));

		fseek(pFile, 0L, SEEK_SET);	 //처음 위치로 설정
		print(ftell(pFile));

		fseek(pFile, 6L, SEEK_SET);	 //처음 위치에서 6번째 설정
		print(ftell(pFile));

		fseek(pFile, -2L, SEEK_CUR);	 //현재 위치(6)에서 2번 앞으로 이동
		print(ftell(pFile));

		fseek(pFile, -1L, SEEK_END);	 //파일의 끝으로 이동한 후에 1칸 앞으로 이동
		print(ftell(pFile));

		fclose(pFile);
	}
}
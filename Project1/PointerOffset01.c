#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	int* pnData = NULL;	//NULL은 stdio.h파일에 0값으로 정의

	pnData = (int*)malloc(sizeof(int) * 4);
	//malloc()는 memory allocation의 약어로 heap영역에
	//기억공간을 할당(4바이트 4개 16바이트)

	memset(pnData, 65, sizeof(int) * 4);
	// memory set함수로 기억공간 4개에 65값을 저장

	printf("%p\n", pnData);
	printf("%p\n", pnData+1);
	printf("%p\n", pnData+2);
	printf("%p\n", pnData+3);

	for (int i = 0; i < 4; i++)
		printf("%c\t", pnData[i]);
}

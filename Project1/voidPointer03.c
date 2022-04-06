#include <stdio.h>

void arrDump(void* array, int length);

void main()
{
	int arri[] = { 1,2,3,4,5 };
	char arrc[] = "APointer";

	arrDump(arri, sizeof(arri));
	printf("\n\n");
	arrDump(arrc, sizeof(arrc));
}
//void *를 사용하는 이유는 코드외 길이를 줄이기 위함
//함수를 1개만 사용해도 자료형이 다른 경우 처리를 할 수 있다.

void arrDump(void* array, int length)
{
	for (int i = 0; i < length; i++) {
		printf("%02X ", *((unsigned char*)array + i));
		 //%02X---16진수 대문자로 출력하시오
		//(unsigned char*)array---unsigned char* 포인터로 형변환
		//*(array+0)
		//*(array+1)
		//*(array+2)
		// : 
		//*(array+8)
	}
}
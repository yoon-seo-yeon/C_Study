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
//void *�� ����ϴ� ������ �ڵ�� ���̸� ���̱� ����
//�Լ��� 1���� ����ص� �ڷ����� �ٸ� ��� ó���� �� �� �ִ�.

void arrDump(void* array, int length)
{
	for (int i = 0; i < length; i++) {
		printf("%02X ", *((unsigned char*)array + i));
		 //%02X---16���� �빮�ڷ� ����Ͻÿ�
		//(unsigned char*)array---unsigned char* �����ͷ� ����ȯ
		//*(array+0)
		//*(array+1)
		//*(array+2)
		// : 
		//*(array+8)
	}
}
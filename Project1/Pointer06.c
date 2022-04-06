#include <stdio.h>
void main()
{
	int a[5] = { 10,20,30,40,50 };
	int* p;
	p = a;

	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("p + %d = %d\n", i, *(p + i));
	}
	printf("\n");
	//주소값 출력하고 주소는 4씩 증가한다. 
	//왜냐하면 int형 이기 때문
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("배쳘 주서  = %p\n", (p + i));
	}
}
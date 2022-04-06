#include <stdio.h>
void main()
{
	int i = 5, j = 10;
	int* p = &i;//초기화(선언과 동시에 값을 할당)
	//p는 포인터 변수이고, 주소의 내용이 정수값이다.
	//변수 i의 주소값을 p에 저장
	//따라서 &i와 p는 같은 주소값을 가지고 있다.
	int* q = &j;

	printf("(1) i=%d, j=%d\n", i, j);
	printf("(2) &i=%p, &j=%p\n", &i, &j);
	printf("(3) p=%p, q=%p\n", p, q);
	printf("(4) *p=%d, *q=%d\n",*p, *q);

}
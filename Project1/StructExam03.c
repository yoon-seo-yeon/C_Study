#include <stdio.h>

//전체 함수에서 구조체 사용 
//struct HAP {
//	int a, b;
//};

void main()
{		 
	//main함수 안에서만 구조체 사용
	struct HAP {
	int a, b;
	};
	struct HAP sum;
	int hapgae;
	printf("두 수 입력 : ");
	scanf("%d%d", &sum.a, &sum.b);
	hapgae = sum.a + sum.b;
	printf("합계 : %d\n", hapgae);
}
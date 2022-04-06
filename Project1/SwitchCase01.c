#include <stdio.h>
void main()
{
	int cap;
	printf("다음 국가의 수도는 ?(1. 미국, 2. 일본, 3. 대만)\n");
	scanf("%d", &cap);
	switch (cap)
	{
	case 1: printf("미국 : 워싱턴 D.C. \n"); break;
	case 2: printf("일본 : 도쿄 \n"); break;
	case 3: printf("대만 :  타이빼이 \n"); break;
	default: printf("입력 오류입니다.\n");
	}
	
}
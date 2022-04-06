/*
90점이상이면 "A" 출력
80점이상이고 90점미만이면 "B" 출력
70점이상이고 80점미만이면 "C" 출력
60점이상이고 70점미만이면 "D" 출력
60점미만이면 "F"출력
*/
#include <stdio.h>
void main()
{
	int score;
	printf("점수를 입력 : ");
	scanf("%d", &score);

	switch (score / 10) // 정수 나누기 정수는 정수값이다.
	{
	    case 10:case 9: printf("학점은 A입니다.\n"); break;
		//switch  ~case 문을 탈출
		case 8: printf("학점은 B입니다.\n"); break;
		case 7: printf("학점은 C입니다.\n"); break;
		case 6: printf("학점은 D입니다.\n"); break;
		default:  printf("학점은 F입니다.\n"); 

	}
}
#include <stdio.h>
void main()
{
	//aaa[3]배열 포인터 변수이다. 즉, aaa[0], aaa[1], aaa[2]
	//3개 변수가 포인터 변수이다.
	//aaa[0]="korea", aaa[1]="computer", aaa[2]="school";
	char* aaa[3] = { "korea", "computer", "school" };

	for (int i = 0; i < 3; i++)
		printf("aaa[%d] data = %s\n", i, aaa[i]);

	printf("\n\n");		//줄바꿈

	//char aaa[3][9]와 같다. 문자열중에서 가장 긴 "computer"
	//문자열 갯수를 기준으로 2차원 배열이 결정된 것이다.
	for (int i = 0; i < 3; i++) {
		for (int j=0; j<9; j++)
			printf("%5c", aaa[i][j]);
		printf("\n");
	}
}
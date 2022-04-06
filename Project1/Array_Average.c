// 정수 데이터 5개를 scanf() 함수를 이용해서 입력받아서 배열(numArr)저장하고
// 출력, 합(sum)과 평균(avg)도 출력하시오.
#include <stdio.h>

int main()
{
	int sum = 0;  //합
	double avg;  //평균
	int numArr[5]; // 방의 갯수, 인덱스는 0~4까지
	printf("정수 5개 입력 : ");

	//입력
	for (int i = 0; i < 5; i++) {
		scanf("%d", &numArr[i]);  
		sum = sum + numArr[i];
	}
	avg = (double)sum / 5.0;
	printf("\n\n");
	printf("합 : %d, 평균 : %.2f\n", sum, avg);
	
	/*
	//출력
	for (int i = 0; i < 5; i++) {
		printf("%d\t", numArr[i]);
	}
	*/

	return 0;
}
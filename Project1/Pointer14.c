#include <stdio.h>

int hap(int values[], int num);

int main()
{
	int num[6];
	int sum = 0;

	printf("6개의 양의 정수값을 입력하시오\n");
	for (int i = 0; i < 6; i++) {
		printf("%d 번째 정수값 하나를 입력 : ", i + 1);
		scanf("%d", &num[i]);
	}
	sum = hap(num, 6);
	printf("\n5개의 수의 합 : %d", hap(num, 6));
}
int hap(int* values, int num) {	//main()함수의 배열의 주소값을
	//포인터 변수 values로 받음. 따라서 values를 배열로 사용가능
	int sum = 0;
	for (int i = 0; i < num; i++) {
		//sum+=values[i];
		sum += *(values+i);
	}
	return sum;
}
#include <stdio.h>

int hap(int values[], int num);

int main()
{
	int a[5];
	int sum = 0;

	printf("5개의 양의 정수값을 입력하시오\n");
	for (int i = 0; i < 5; i++) {
		printf("%d 번째 정수값 하나를 입력 : ", i+1);
		scanf("%d", &a[i]);
	}
	sum = hap(a, 5);
	printf("main()함수의 배열 a의 주소값 : %p\n", a);
	printf("\n5개의 수의 합 : %d", sum);
	//main()함수의 배열의 주소값을 hap()함수 values배열에게
	//넘겨준것이기 때문에 같은 기억공간을 사용한다.
}
int hap(int values[], int num) {
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += values[i];
	}
	printf("hap()함수의 배열 values의 주소값 : %p\n", values);
	return sum;
}
#include <stdio.h>

void main()
{
	int a[10], max, min;
	int i;

	for (i = 0; i < 5; i++) {
		printf("10개의 정수 데이터를 배열에 입력하세요.\n");
		scanf("%d", &a[i]);
	}

	max = a[0];
	min = a[0];

	for (i = 1; i < 5; i++) {
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}

	printf("\n 최대값 : %d", max);
	printf("\n 최소값 : %d", min);
}
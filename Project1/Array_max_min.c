#include <stdio.h>

void main()
{
	int a[10], max, min;
	int i;

	for (i = 0; i < 5; i++) {
		printf("10���� ���� �����͸� �迭�� �Է��ϼ���.\n");
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

	printf("\n �ִ밪 : %d", max);
	printf("\n �ּҰ� : %d", min);
}
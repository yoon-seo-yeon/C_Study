#include <stdio.h>

int hap(int values[], int num);

int main()
{
	int a[5];
	int sum = 0;

	printf("5���� ���� �������� �Է��Ͻÿ�\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ��° ������ �ϳ��� �Է� : ", i+1);
		scanf("%d", &a[i]);
	}
	sum = hap(a, 5);
	printf("main()�Լ��� �迭 a�� �ּҰ� : %p\n", a);
	printf("\n5���� ���� �� : %d", sum);
	//main()�Լ��� �迭�� �ּҰ��� hap()�Լ� values�迭����
	//�Ѱ��ذ��̱� ������ ���� �������� ����Ѵ�.
}
int hap(int values[], int num) {
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += values[i];
	}
	printf("hap()�Լ��� �迭 values�� �ּҰ� : %p\n", values);
	return sum;
}
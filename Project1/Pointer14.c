#include <stdio.h>

int hap(int values[], int num);

int main()
{
	int num[6];
	int sum = 0;

	printf("6���� ���� �������� �Է��Ͻÿ�\n");
	for (int i = 0; i < 6; i++) {
		printf("%d ��° ������ �ϳ��� �Է� : ", i + 1);
		scanf("%d", &num[i]);
	}
	sum = hap(num, 6);
	printf("\n5���� ���� �� : %d", hap(num, 6));
}
int hap(int* values, int num) {	//main()�Լ��� �迭�� �ּҰ���
	//������ ���� values�� ����. ���� values�� �迭�� ��밡��
	int sum = 0;
	for (int i = 0; i < num; i++) {
		//sum+=values[i];
		sum += *(values+i);
	}
	return sum;
}
// ���� ������ 5���� scanf() �Լ��� �̿��ؼ� �Է¹޾Ƽ� �迭(numArr)�����ϰ�
// ���, ��(sum)�� ���(avg)�� ����Ͻÿ�.
#include <stdio.h>

int main()
{
	int sum = 0;  //��
	double avg;  //���
	int numArr[5]; // ���� ����, �ε����� 0~4����
	printf("���� 5�� �Է� : ");

	//�Է�
	for (int i = 0; i < 5; i++) {
		scanf("%d", &numArr[i]);  
		sum = sum + numArr[i];
	}
	avg = (double)sum / 5.0;
	printf("\n\n");
	printf("�� : %d, ��� : %.2f\n", sum, avg);
	
	/*
	//���
	for (int i = 0; i < 5; i++) {
		printf("%d\t", numArr[i]);
	}
	*/

	return 0;
}
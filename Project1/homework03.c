#include <stdio.h>

int geagop(int num);		//���� ���ϴ� �Լ�
int main(void)
{
	int a;
	printf("1~100 ������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	if (a >= 1 && a <= 100) {
		geagop(a);
	}
	else {
		printf("�ٽ� �Է��Ͻÿ� 1~100 ������ ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &a);
	}
}
	int geagop(int num) {
		printf("%d�� ������ %d\n", num, num * num);
		return 0;
}
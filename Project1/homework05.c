#include <stdio.h>
//#define num 6
void sort(int*, int size);	//���� ���ϴ� �Լ�

int main(void)
{
	int i;
	int size = 5;
	//printf("1~100 ������ ������ �Է��Ͻÿ� ");
	//scanf_s("%d", &size);
	int a[6];

	for (i = 1; i < 6; i++) {
		printf("1~100 ������ %d ��° ������ �Է��Ͻÿ� : ", i);
		scanf_s("%d", &a[i]);
		//printf("\n %d", a[i]);
	}
	printf("�����ϱ� �� �Էµ� ��");
	for (i = 1; i < 6; i++)
		printf("%5d", a[i]);
		printf("\n");

	sort(a, size);
	printf("�������� ������ �� ");
	for (i = 0; i < 6; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}
void sort(int* a, int size)
{
	int i, j;
	int temp;
	printf("�Լ����� ���� ������ �� ");
	for (i = 1; i < 6; i++)
		printf(" %5d", a[i]);
	printf("\n");

	for(i=0; i<5; i++)
		for(j=i+1; j<=5; j++)
			if (*(a + i) > * (a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		printf("�Լ����� ���� ������ �� ");
		for (i = 1; i < 6; i++)
			printf("%5d", a[i]);
			printf("\n");
			return;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num, cnt = 0;

	srand((unsigned)time(NULL));	//���α׷��� ����ɶ�����
	//���ο� ������ �߻���Ű�� �Ѵ�.

	for (int i = 0; i <50; i++)
	{
		num = rand() % 5;		//� ���� ������ 5�� ������ �������� 0, 1, 2, 3, 4
		printf("%3d", num);
		cnt++;
		if (cnt % 4 == 0)	//1�ٿ� 4���� ����ϱ� ���� �����̴�.
			printf("\n");
	}						 
	printf("\n");

}
#include <stdio.h>
void main()
{
	//aaa[3]�迭 ������ �����̴�. ��, aaa[0], aaa[1], aaa[2]
	//3�� ������ ������ �����̴�.
	//aaa[0]="korea", aaa[1]="computer", aaa[2]="school";
	char* aaa[3] = { "korea", "computer", "school" };

	for (int i = 0; i < 3; i++)
		printf("aaa[%d] data = %s\n", i, aaa[i]);

	printf("\n\n");		//�ٹٲ�

	//char aaa[3][9]�� ����. ���ڿ��߿��� ���� �� "computer"
	//���ڿ� ������ �������� 2���� �迭�� ������ ���̴�.
	for (int i = 0; i < 3; i++) {
		for (int j=0; j<9; j++)
			printf("%5c", aaa[i][j]);
		printf("\n");
	}
}
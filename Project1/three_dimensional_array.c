// three_dimensional_array.c
#include <stdio.h>

int main(void) {
	int score[3][3][2];		//3������ �л� 3�� 2���� ������ üũ
	int total[2] = { 0 };

	for (int i = 0; i < 3; i++) {		//���� �Է¹���
		for (int j = 0; j < 3; j++) {
			printf("%d�� %d�� �л��� ����, ��������: ", i + 1, j + 1);
			scanf("%d %d", &score[i][j][0], &score[i][j][1]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; i++) {
			total[0] += score[i][j][0];
			total[1] += score[i][j][1];
		}
	}
	printf("\n\n��ü�� 9���� ���� ����:%d", total[0]);
	printf("\n��ü�� 9���� ���� ����:%d", total[1]);
	
	return 0;
}
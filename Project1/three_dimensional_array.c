// three_dimensional_array.c
#include <stdio.h>

int main(void) {
	int score[3][3][2];		//3개반의 학생 3명 2과목 성적을 체크
	int total[2] = { 0 };

	for (int i = 0; i < 3; i++) {		//점수 입력받음
		for (int j = 0; j < 3; j++) {
			printf("%d반 %d번 학생의 국어, 수학점수: ", i + 1, j + 1);
			scanf("%d %d", &score[i][j][0], &score[i][j][1]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; i++) {
			total[0] += score[i][j][0];
			total[1] += score[i][j][1];
		}
	}
	printf("\n\n전체반 9명의 국어 총점:%d", total[0]);
	printf("\n전체반 9명이 수학 총점:%d", total[1]);
	
	return 0;
}
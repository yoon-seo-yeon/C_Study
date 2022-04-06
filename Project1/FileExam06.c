#include <stdio.h>

void main()
{
	FILE* fp = NULL;
	int kor, number;
	char name[10];

	fp = fopen("test9-11.txt", "w");  //w=write 쓰기라는 뜻
	if (fp == NULL) {
		printf("저장할 성적파일을 열 수 없습니다.");
		exit(1);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번 이름 국어 점수 입력 \n", i+1);
		printf("학번 : "); scanf("%d", &number);
		printf("이름 : "); scanf("%s", &name);
		printf("국어점수 : "); scanf("%d", &kor);
		fprintf(fp, "%d %s %d\n", number, name, kor);
	}
	fclose(fp);
	fp = fopen("test9-11.txt", "r");   //r=read라는 뜻
	if (fp == NULL) {
		printf("저장할 성적파일을 열 수 없습니다.");
		exit(1);
	}
	printf("학번   이름   국어 \n");
	printf("=====================\n");

	for (int i = 0; i < 3; i++) {
		fscanf(fp, "%d %s %d\n", &number, name, &kor);
		printf("%d %s %d\n", number, name, kor);
	}
	fclose(fp);
}
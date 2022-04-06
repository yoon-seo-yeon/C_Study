#include <stdio.h>

void main()
{
	FILE* fp=NULL;
	int kor, eng, mat, hap;
	float avg; //평균	  
	char num[6], name[8];

	fp = fopen("test9-10.txt", "r");

	//if (fp = NULL)
	//	printf("원본 파일을 열 수 없습니다.");

	printf("====================================================\n");
	printf("학번     이름    국어    영어    수학    총점    평균\n");
	printf("====================================================\n");

	for (int i = 0; i < 5; i++) 
	{
		fscanf(fp, "%s%s%d%d%d", num, name, &kor, &eng, &mat);
		//fp가 가리키는 파일(test9-10.txt)을 가리키는 파일 포인터이고 파일의
		//처음 위치를 가리킨다. 
		//데이터를 읽고 난 후에는 그 다음줄의 처음 위치를 자동적으로 가리킨다
		hap = kor + eng + mat;
		avg = (float)hap / 3;
		printf("%-6s %6s   %3d    %3d    %3d    %4d    %7.2f\n", num, name, kor, eng, mat, hap, avg);
	}
	close(fp);
}												
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int charge = 1000;		//요금
	int i, j;
	int startstation = 0;	//출발점 거리
	int endstation = 0;		//도착점 거리
	int ret = 0;				//반복하기 위한 변수
	int distance;				//거리 = 출발역-도착역

	const char start[20] = "";	//출발역 입력
	printf("출발역 : ");
	scanf("%s", &start);

	const char end[20] = "";		//도착역 입력
	printf("도착역 : ");
	scanf("%s", &end);

	int a[10] = { 0,13,24,35,46,57,68,79,82,93 };
	char b[][6] = { "신림", "봉천", "사당", "방배", "서초", "교대", "강남", "역삼", "선릉", "삼섬" };

	//strcmp 함수를 사용해서 출발역 비교
	for (int i = 0, j = -1; i < 6; i++) {
		int ret = strcmp(start, b[i]);
		if (ret == -1 && i == 10) {
			printf("  출발역이 없습니다.");
			printf("  다시 입력 하세요.");
			printf("출발역 : ");
			scanf("%s", &start);
			i = 0;
		}
		else if (ret == 0) {
			startstation = a[i];
			printf("출발역 : %d", i);
			break;
		}
	}

	//strcmp 함수를 사용해서 도착역 비교
	for (int i = 0, j = -1; i < 6; i++) {
		int ret = strcmp(end, b[i]);
		if (ret == -1 && i == 5) {
			printf("  도착역이 없습니다.");
			printf("  다시 입력 하세요.");
			printf("도착역 : ");
			scanf("%s", &end);
			i = 0;
		}
		if (ret == 0) {
			endstation = a[i];
			printf("도착역 : %d", i);
			break;
		}
	}
}
	/*
	distance(startstation - endstation);
	//요금 계산하는 프로그램 작성
	int total;
	if (distance(startstation - endstation) >20) {
		total = (charge + (distance(startstation - endstation) - 20) * 300);
	}
	else if (distance(startstation - endstation) <= 20) {
		total = charge;
	}
	printf("요금은 %d 입니다.", total);
	
	return 0;
}
*/
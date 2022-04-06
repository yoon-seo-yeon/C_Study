#include <stdio.h>

int main() {
	char d[7] = { 'd','i','g','i','t','a','l' };

	for (int i = 0; i < sizeof(d); i++) {
		printf("%4c", d[i]);
	}
	printf("\n\n%p", d);	//d는 배열 전체의 시작 주소값을 의미한다
	printf("\t%p", &d[0]);		//d[0]는 배열에서 첫번째 요소의 주소값을 의미한다
	printf("\t%p", &d[1]);

	return 0;
}
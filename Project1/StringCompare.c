#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20] = "Mirim Meister";
	char* s2 = "mirim Meister";

	int ret = strcmp(s1, s2);		//문자열을 비교하는 함수	
	//s1과 s2의 문자열이 같을 경우에는 0값을 리턴
	//s1과 s2의 문자열이 다를 경우에는 -1값을 리턴

	printf("%d", ret);

	return 0;
}
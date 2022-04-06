#include <stdio.h>
#include <string.h>

void main()
{
	int k;
	char ch[] = "happy";
	k = strlen(ch);	//k는 5가 된다. 
	//strlen()함수는 ch배열 기억공간의 갯수

	for (int i = 0; i < k; i++){
		for (int j=k-i-1; j<k; j++) {
				printf("%c", ch[j]);
			}
		printf("\n");
	}
}
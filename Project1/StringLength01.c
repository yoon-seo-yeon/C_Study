#include <stdio.h>
#include <string.h>

void main()
{
	int k;
	char ch[] = "happy";
	k = strlen(ch);	//k�� 5�� �ȴ�. 
	//strlen()�Լ��� ch�迭 �������� ����

	for (int i = 0; i < k; i++){
		for (int j=k-i-1; j<k; j++) {
				printf("%c", ch[j]);
			}
		printf("\n");
	}
}
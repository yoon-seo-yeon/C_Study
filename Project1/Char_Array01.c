#include <stdio.h>

int main() {
	char d[7] = { 'd','i','g','i','t','a','l' };

	for (int i = 0; i < sizeof(d); i++) {
		printf("%4c", d[i]);
	}
	printf("\n\n%p", d);	//d�� �迭 ��ü�� ���� �ּҰ��� �ǹ��Ѵ�
	printf("\t%p", &d[0]);		//d[0]�� �迭���� ù��° ����� �ּҰ��� �ǹ��Ѵ�
	printf("\t%p", &d[1]);

	return 0;
}
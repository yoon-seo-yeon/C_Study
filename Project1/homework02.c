#include <stdio.h>
void main()
{
	int i;
	char *name[] = { "kimsuchul", "leeyongsu", "kindongsu", "bakgicheal", "kinyongsuk", "choigiwha", "leesungee", "chebeangsuk", "songdalsu", "hajongsik" };
	printf("kimsuchul, leeyongsu, kindongsu, bakgicheal, kinyongsuk\n");
	printf("choigiwha, leesungee, chebeangsuk, songdalsu, hajongsik\n\n");
	printf("k�� �����ϴ� �̸���");
	for (i = 0; i < 9; i++) {
		if (name[i][0] == 'k')
			printf("%12s", name[i]);
	}
	printf("\n�̻��Դϴ�\n");
}
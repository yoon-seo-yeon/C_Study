#include <stdio.h>
void main()
{
	int a[2][3] = {
		{11,12,13},
		{21,22,23}
	};
	//int* p;
	//p = &a[0][0];
	for (int i = 0; i<sizeof(a) / sizeof(a[0]); i++) {
		for (int j = 0; j<sizeof(a[i]) / sizeof(int); j++) {
			printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}
}
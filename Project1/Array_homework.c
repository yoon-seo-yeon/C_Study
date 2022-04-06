#include <stdio.h>

void main()
{
	int k, m;
	int d[10] = { 1,5,3,2,1,4,2,5,3,1 };
	int cnt[5] = { 0,0,0,0,0 };

	for (k = 0; k < 10; k++) {	
		for (m = 1; m <= 5; m++) {
			if (d[k] == m)
				cnt[m - 1] += 1;
		}
	}
	for (m = 0; m < 5; m++)
		printf("%d : %d\n", m + 1, cnt[m]);

}
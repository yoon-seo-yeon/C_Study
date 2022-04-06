#include <stdio.h>

void main()
{
	char aa[6] = "KOREA";
	char* p;
	p = &aa[0];

	printf("p = %p\n", &aa[0]);
	printf("&p = %p\n", &p);
	printf("*p = %c\n\n", *p);

	for (int i = 0; i <= sizeof(aa); i++) {
		printf("aa[%d]=%c, ÁÖ¼Ò´Â %p\n", i, *(p + i), &aa[i]);
	}
}
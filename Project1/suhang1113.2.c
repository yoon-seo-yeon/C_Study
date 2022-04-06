#include <stdio.h>
void main()
{
	int a[10] = { 12,3,19,6,18,8,12,4,1,16 };

	printf("요소             값               히스토그램");
	printf("\n");
	printf("------------------------------------\n");

	char* b = a[0] = "************";
	char* c = a[1] = "***";
	char* d = a[2] = "*******************";
	char* e = a[3] = "******";
	char* f = a[4] = "******************";
	char* g = a[5] = "********";
	char* h = a[6] = "************";
	char* i = a[7] = "****";
	char* j = a[8] = "*";
	char* k = a[9] = "****************";


	//char aa[6] = "KOREA";
	//char* p;
	//p = &aa[0];

	//int* p;
	//p = a;

	//for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		//printf("a[%d]=%d\t", i, *(p + i));
	//}
	

	for (int i = 0; i < 1; i++) {
		printf("%d           %d            %s\n", i, a[i], b);
	}
	for (int i = 1; i < 2; i++) {
		printf("%d           %d            %c\n", i, a[i], c);
	}
	for (int i = 2; i < 3; i++) {
		printf("%d           %d            %c\n", i, a[i], d);
	}
	for (int i = 3; i < 4; i++) {
		printf("%d           %d            %c\n", i, a[i], e);
	}
	for (int i = 4; i < 5; i++) {
		printf("%d           %d            %c\n", i, a[i], f);
	}
	for (int i = 5; i < 6; i++) {
		printf("%d           %d            %c\n", i, a[i], g);
	}
	for (int i = 6; i < 7; i++) {
		printf("%d           %d            %c\n", i, a[i], h);
	}
	for (int i = 7; i < 8; i++) {
		printf("%d           %d            %c\n", i, a[i], i);
	}
	for (int i = 8; i < 9; i++) {
		printf("%d           %d            %c\n", i, a[i], j);

	} 
	for (int i = 9; i < 10; i++) {
		printf("%d           %d            %c\n", i, a[i], k);
	}
}
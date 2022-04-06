#include <stdio.h>	

void add(int x, int y) 
{
	int z;
	z = x + y;
	printf("%3d\n", z);
}

int main()
{
	add(1, 2);
	add(3, 4);
	add(5, 6);
	add(7, 8);

	return 0;
}
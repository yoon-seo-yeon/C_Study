#include <stdio.h>
//함수 선언
float sub(float a, float b);
void star();

void main()	
{
	float x = 1.21, y = 4.51, z;
	star();
	z = sub(x, y);
	printf("%3.2f+%3.2f=%3.2f\n", x, y, z);
	star();
}
float sub(float x, float y)
{
	return x + y;
}
void star()
{
	printf("****************\n");
}

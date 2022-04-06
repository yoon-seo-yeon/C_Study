#include <stdio.h>

void main()
{
	int a, b, c = 0;
	a = ++c; //c의 값이 1증가한 후에 그 값을 a에 저장한다.
	printf("%d\n", c);
	b = c++; //c의 값을 b에 저장한 후에 1증가한다.
	printf("%d\n", c);
	printf("%d %d %d\n", a, b, ++c);

	return 0;
}
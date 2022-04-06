#include <stdio.h>
void main()
{
	int arr[] = { 10,20,30,40,50 };
	void* vp;
	int* ptr = arr;
	ptr = ptr + 1;	//오류발생 하지 않음

	vp = arr;
	//vp = vp + 1;		//오류 발생---자료형이 결정 안되었기 때문
	printf("%d\n", *(int*)vp);
	//(int*)vp는 vp의 자료형이 char*인데 int*로 형변환
	//*(int*)vp는 arr주소의 값 : 10

	printf("%d\n", *(int*)vp + 1);
}
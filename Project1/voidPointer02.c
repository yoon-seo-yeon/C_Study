#include <stdio.h>
void main()
{
	int arr[] = { 10,20,30,40,50 };
	void* vp;
	int* ptr = arr;
	ptr = ptr + 1;	//�����߻� ���� ����

	vp = arr;
	//vp = vp + 1;		//���� �߻�---�ڷ����� ���� �ȵǾ��� ����
	printf("%d\n", *(int*)vp);
	//(int*)vp�� vp�� �ڷ����� char*�ε� int*�� ����ȯ
	//*(int*)vp�� arr�ּ��� �� : 10

	printf("%d\n", *(int*)vp + 1);
}
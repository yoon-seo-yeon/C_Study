#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void threeNumber(int a[]);
int threeHap(int s[]);
double threeAvg(int d);
int threeNum[100] = { 0 };
int cnt = 0;
void main()
{
	int nData;
	int nArray[100];
	srand((unsigned int)time(NULL));

    for (int i = 0; i < 100; ++i)
    {
        int num = rand(); 
        num = nArray[i];
        cnt += i;
        printf("%d\t", num);
    }

    threeNumber(nArray);

    for (int i = 0; i < cnt; i++)
        printf("%d\t", threeNum[i]);
    printf("\n");

    nData = threeHap(threeNum);
    printf("3�� ��� �� : %d\n", nData);

    printf("3�� ��� ��� : %.2f", threeAvg(nData));
}
void threeNumber(int a[]) {
    int nArray;
    if (nArray % 3 == 0) {
      threeNum=nArray;
    }
}

int threeHap(int s[]) {
    int nArray;
    nArray++;
}

double threeAvg(int d) {
    int nArray;
    nArray / cnt;
}
/*
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    // �� ������ �ּ� ó���ϸ� �����Ҷ�����
    // ��� ���� ���� ���´�.
    // ���� �̹����� �ð��� ���� �ٸ� ����
    // �߻��ϵ��� ����Ǿ� �ִ�.

    for (int i = 0; i < 5; ++i)
    {
        int num = rand();
        // rand(); �� 5�ڸ� ������ ���� ���
        printf("%d\t", num);
    }
    printf("\n\n");
    for (int i = 0; i < 5; ++i)
    {
        int num = rand() % 6 + 1;
        //rand() % 6�� 0~5�� ���� �߻�
        //  0~5
        // +1�� �ϸ� 1~6������ ���� �߻��Ѵ�.    

        printf("%d\t", num);
    }
    printf("\n\n");


    return 0;
}
*/
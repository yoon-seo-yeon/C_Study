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
#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    // 위 문장을 주석 처리하면 실행할때마다
    // 결과 값이 같이 나온다.
    // 따라서 이문장은 시간에 따라가 다른 값이
    // 발생하도록 설계되어 있다.

    for (int i = 0; i < 5; ++i)
    {
        int num = rand();
        // rand(); 는 5자리 임의의 정수 출력
        printf("%d\t", num);
    }
    printf("\n\n");
    for (int i = 0; i < 5; ++i)
    {
        int num = rand() % 6 + 1;
        //rand() % 6는 0~5의 값이 발생
        //  0~5
        // +1을 하면 1~6사이의 값이 발생한다.    

        printf("%d\t", num);
    }
    printf("\n\n");


    return 0;
}
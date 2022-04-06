#include <stdio.h>

void main()
{
    float a[7] = { 0, };
    printf("정수 5개 입력\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
        a[5] += a[i];
    }
    a[6] = a[5] / 5.0;
    printf("합 : %d\n", (int)a[5]);
    printf("평균 : %.2f", a[6]);
}
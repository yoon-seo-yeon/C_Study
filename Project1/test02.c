#include <stdio.h>

void main()
{
    float a[7] = { 0, };
    float * sum;
    sum = &a[5];
    printf("정수 5개 입력\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
        *sum += a[i];
    }
    a[6] = *sum / 5.0;
    printf("합 : %d\n", (int)*sum);
    printf("평균 : %.2f", a[6]);
}
#include <stdio.h>

void main()
{
    float a[7] = { 0, };
    float * sum;
    sum = &a[5];
    printf("���� 5�� �Է�\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
        *sum += a[i];
    }
    a[6] = *sum / 5.0;
    printf("�� : %d\n", (int)*sum);
    printf("��� : %.2f", a[6]);
}
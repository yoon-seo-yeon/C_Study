#include <stdio.h>

void main()
{
    float a[7] = { 0, };
    printf("���� 5�� �Է�\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &a[i]);
        a[5] += a[i];
    }
    a[6] = a[5] / 5.0;
    printf("�� : %d\n", (int)a[5]);
    printf("��� : %.2f", a[6]);
}
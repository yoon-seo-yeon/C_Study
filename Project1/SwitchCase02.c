/*
90���̻��̸� "A" ���
80���̻��̰� 90���̸��̸� "B" ���
70���̻��̰� 80���̸��̸� "C" ���
60���̻��̰� 70���̸��̸� "D" ���
60���̸��̸� "F"���
*/
#include <stdio.h>
void main()
{
	int score;
	printf("������ �Է� : ");
	scanf("%d", &score);

	switch (score / 10) // ���� ������ ������ �������̴�.
	{
	    case 10:case 9: printf("������ A�Դϴ�.\n"); break;
		//switch  ~case ���� Ż��
		case 8: printf("������ B�Դϴ�.\n"); break;
		case 7: printf("������ C�Դϴ�.\n"); break;
		case 6: printf("������ D�Դϴ�.\n"); break;
		default:  printf("������ F�Դϴ�.\n"); 

	}
}
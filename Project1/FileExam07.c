#include <stdio.h>

void main()
{
	int ch;
	
	while (1)
	{
		ch = fgctc(stdin);	  //stdin�� standard input�� ���ڷ� ȭ��(�ܼ�)���� ���� �Է�
		if (ch == EOF)	//EO(-1)F������ ��	 CTRL+C
			break;	 //�ݺ��� ���� 
		fputc(ch, stdout);
		//stdin�� standard output�� ���ڷ� ȭ��(�ܼ�)���� ���� �Է�
	}
}
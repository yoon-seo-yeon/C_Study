#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE* next;
	int data;
};

void main()
{
	struct NODE* head = malloc(sizeof(struct NODE));
	//struct NODE����ü ũ���� �޷θ��� heap������ ������ �Ҵ�
	//haed�� struct NODE����ü�� ����Ű�� ������ ����

	struct NODE* node1 = malloc(sizeof(struct NODE));
	//struct NODE����ü ũ���� �޷θ��� heap������ ������ �Ҵ�
	//node1�� struct NODE����ü�� ����Ű�� ������ ����
	head->next = node1;		
	//head�� ����Ű�� ����ü�� next������ ������ node1 �ּҰ��� ����
	node1->data = 100;
	//node1�� ����Ű�� ����ü�� data������ 100�� ���� 

	struct NODE* node2 = malloc(sizeof(struct NODE));
	head->next = node2;
	node2->data = 200;

	struct NODE* node3 = malloc(sizeof(struct NODE));
	head->next = node3;
	node3->data = 300;	

	node3->next = NULL;
	//�� ������ ����� next�����Ϳ� NULL���� �����Ѵ�

	struct NODE* curr = head->next;
	//curr�� linked list(����Ǿ� �ִ� ������ ����)�� ù��° ��带
	//����Ű�� ������ �����̴�.
	while (curr != NULL)   //curr�� NULL���� �ƴҶ����� �ݺ� �����Ѵ�.
	{
		printf("%d\n", curr->data);		//���� ��带 ����Ű�� data������ ���� ���
		curr = curr->next;	  //��带 �� ĭ�� �̵��ϴ� �����̴�
	}
	free(node3);   //heap������ �Ҵ�Ǿ� �ִ� �޸𸮸� ����(����)
	free(node2);
	free(node1);
	free(head);
}
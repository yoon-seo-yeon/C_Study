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
	//struct NODE구조체 크기의 메로리가 heap영역에 공간이 할당
	//haed는 struct NODE구조체를 가리키는 포인터 변수

	struct NODE* node1 = malloc(sizeof(struct NODE));
	//struct NODE구조체 크기의 메로리가 heap영역에 공간이 할당
	//node1는 struct NODE구조체를 가리키는 포인터 변수
	head->next = node1;		
	//head가 가리키는 구조체의 next포인터 변수는 node1 주소값을 받음
	node1->data = 100;
	//node1이 가리키는 구조체의 data변수에 100을 저장 

	struct NODE* node2 = malloc(sizeof(struct NODE));
	head->next = node2;
	node2->data = 200;

	struct NODE* node3 = malloc(sizeof(struct NODE));
	head->next = node3;
	node3->data = 300;	

	node3->next = NULL;
	//맨 마지막 노드의 next포인터에 NULL값을 저장한다

	struct NODE* curr = head->next;
	//curr은 linked list(연결되어 있는 데이터 구조)의 첫번째 노드를
	//가리키는 포인터 변수이다.
	while (curr != NULL)   //curr이 NULL값이 아닐때까지 반복 실행한다.
	{
		printf("%d\n", curr->data);		//현재 노드를 가리키는 data변수의 값을 출력
		curr = curr->next;	  //노드를 한 칸씩 이동하는 문장이다
	}
	free(node3);   //heap영역에 할당되어 있는 메모리를 삭제(해제)
	free(node2);
	free(node1);
	free(head);
}
//Linked List연습
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//함수 printLL()
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음
void printLL(Node* ptr){
	while(ptr !=NULL){
		 printf("score=%d\n",ptr->score);
		 ptr = ptr->pNext;
	}
}
//함수: creatNode()
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 포인터를 반환하다. 이때 score=입력. pNext=NULL로한다
//부수효과: 없음
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score=input;
	ptr->pNext=NULL;
	return ptr;
}

//함수 addTail()
//입력: 연결리스트, 추가하려는 노드 포인터
//출력: 없음
//부수효과: 추가하려는 노드가 연결리스트의 tail로 추가됨
void addTall(Node* pHead, Node* pNode) {
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}
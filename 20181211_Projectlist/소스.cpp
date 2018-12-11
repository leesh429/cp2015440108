//Linked List연습
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//함수:addHead()
//입력: 연결리스트, 새 노드
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
void addHead(Node** ppHead, Node* pNewNode){
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}
int main(){
	Node* pHead=NULL, *ptr;//헤드노드의 포인터, null이면 연결리스트가 없다는 의미
//	Node a,b;
//	a.score =10; b.score=20;
//	a.pNext=&b; b.pNext=NULL;
//	pHead=&a;
//	pHead = createNode(10), ptr;
//	pHead->pNext = createNode(20);
//	printLL(pHead);
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);

	return 0;
}
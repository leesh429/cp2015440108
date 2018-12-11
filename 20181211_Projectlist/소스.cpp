//Linked List����
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//�Լ�:addHead()
//�Է�: ���Ḯ��Ʈ, �� ���
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node** ppHead, Node* pNewNode){
	pNewNode->pNext = *ppHead;
	*ppHead = pNewNode;
}
int main(){
	Node* pHead=NULL, *ptr;//������� ������, null�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�
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
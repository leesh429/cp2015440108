//Linked List����
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int score;
	struct node* pNext;
} Node;
//�Լ� printLL()
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����
void printLL(Node* ptr){
	while(ptr !=NULL){
		 printf("score=%d\n",ptr->score);
		 ptr = ptr->pNext;
	}
}
//�Լ�: creatNode()
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�ϴ�. �̶� score=�Է�. pNext=NULL���Ѵ�
//�μ�ȿ��: ����
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score=input;
	ptr->pNext=NULL;
	return ptr;
}
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
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
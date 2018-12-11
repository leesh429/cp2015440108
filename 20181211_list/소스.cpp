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

//�Լ� addTail()
//�Է�: ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//���: ����
//�μ�ȿ��: �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTall(Node* pHead, Node* pNode) {
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}
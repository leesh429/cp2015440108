#include <stdio.h>
//printArray()
//�Է�: �迭
//���: ����
//�μ�ȿ��: ȭ�鿡 �迭�� ���� ���
//void printArray(int arr[], int len){
void printArray(int* arr, int len){//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index=0; index<len; index++){
		printf("arry[%d]=%d\n",index,arr[index]);
	}
}

int main(){
	int a[3]={10,20,30};//�迭�� ����=�迭�̸�:a,�迭����:3
	int* ptr;//�迭�� �̸��� ����ϸ� �� �迭 ù ����� ������
	printArray(a, 3);
	
	
	//printArray(a,3);
	//a=ptr;//error WHY? �迭�� �̸�(a)�� ���� ������ �ִ�. �� rvalue(<->lvalue)�̴�.
	//10=a[2];//error ���� ���� ����

	return 0;
}
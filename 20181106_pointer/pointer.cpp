#include <stdio.h>//pointer 1.�޸��ּ� 2.�޸� �ּҸ� �������� �ϴ°��� �ڷ���
int main() {
	
	int a=10;//////���� ����+ ���� �ʱ�ȭ a=>int, 10
	int* ptr;//////�����ͺ��� ����
	ptr=&a;////////ptr=>int*, &a   &(Ampersand):address of a, ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��°)
	*ptr=20;//////*ptr --> "data of ptr", �����ͺ��� ptr�� ����Ű�� ���� ������
	printf("a=%d\n",a);


	
	return 0;
}
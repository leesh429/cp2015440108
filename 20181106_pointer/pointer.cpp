#include <stdio.h>//pointer 1.메모리주소 2.메모리 주소를 시작으로 하는값의 자료형
int main() {
	
	int a=10;//////변수 선언+ 변수 초기화 a=>int, 10
	int* ptr;//////포인터변수 선언
	ptr=&a;////////ptr=>int*, &a   &(Ampersand):address of a, 변수 a의 주소(변수 a를 위해 할당한 메모리의 첫번째)
	*ptr=20;//////*ptr --> "data of ptr", 포인터변수 ptr이 가리키는 곳의 데이터
	printf("a=%d\n",a);


	
	return 0;
}
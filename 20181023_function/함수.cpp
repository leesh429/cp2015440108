#include <stdio.h>

int gVAR=100; //전역변수(global variable)
//함수 sum()			
//입력: 두 정수
//출력: 두 정수의 합
//부수효과: 없음
int sum(int a, int b){///함수 선언	1.함수이름(sum) 2.매개변수의 갯수(2) 3.매개변수의 자료형(int,int) 4.반환형(int)
	int c;	//							 ㄴ>함수 호출하기 위해 필요한 정보
	c=a+b;	//
	return c;/////////////함수 본체
}/////////////////////////////함수 정의
//함수: goodPrint()
//입력:없음
//출력:없음
//부수효과:화면에 good 출력
void goodPrint(){
	printf("good\n");
}

int main() {

	int x=10, y=20, z;
	z=sum(x,y);///////////////함수 호출		1.매개변수를 위한 추가공간 확보 2.확보한 공간에 매개변수값 복사
	printf("z=%d\n", z);
	goodPrint();
	return 0;
}
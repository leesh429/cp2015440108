#include <stdio.h>

//함수 sum()			
//입력: 두 정수
//출력: 두 정수의 합
//부수효과: 없음
int sum(int a, int b){///함수 선언	1.함수이름(sum) 2.매개변수의 갯수(2) 3.매개변수의 자료형(int,int) 4.반환형(int)
	int c;	//							 ㄴ>함수 호출하기 위해 필요한 정보
	c=a+b;	//
	return c;/////////////함수 본체
}/////////////////////////////함수 정의

int main() {

	int x=10, y=20, z;
	z=sum(x,y);///////////////함수 호출
	printf("z=%d\n", z);

	return 0;
}
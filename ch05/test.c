/* 파일명: ch04-1

   * 내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.질량은 kg 단위, 속력은 m/s 단위로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	int x = 3;
	f1();
	int result = f3(2,3);


	return 1;
}

void f1(void)
{
	//1. hello 출력
	printf("안녕! 나는 네 할아버지야\n");

	return;
}

/*
함수명: int f3(int a, intb)
기능: 입력된 두 수 a, b 를 더해서 반환
입력 a b는 정수
반환: 정수
*/

int f3(int a, int b)
{
	int result = 0;

	//두 수를 더해서 반환
	result = a + b;

	return result;
}
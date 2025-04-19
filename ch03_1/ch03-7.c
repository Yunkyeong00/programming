/* 파일명: ch03-7

   * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오. 실수값을 입력받을 때는 12.34처럼 소수 표기 
   방법이나 1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	double a;
	printf("실수?");
	scanf("%lf", &a);
	printf("제곱:%e\n", a * a);
	printf("세제곱:%e\n", a * a * a);
}


int main()
{
	solve();
	return 0;
}
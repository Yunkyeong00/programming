/* 파일명: ch03-1

   * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	float b;
	printf("USD?");
	scanf("%f", &a);
	printf("원/달러의 환율?");
	scanf("%f", &b);
	printf("USD %.2f=KRW %.2f%", a, a * b);

}

int main()
{
	solve();
    return 0;
}
/* 파일명: ch04-15

   * 내용: 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서 환율이 결정된다.
								 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마 다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다.
								환전수수료율은 1.75%로 정해져 있 다고 가정하고 원-달러 매매기준율과 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 걸 정하고,
								구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void solve()
{
	int a, b;
	double result, USD;
	printf("원/달러 매매기준율?");
	scanf("%d", &a);
	printf("환율우대율(0~100%)?");
	scanf("%d", &b);
	const double s = 1.75/100;
	result = a + a * s * (1-b/100.0);
	printf("달러 살 때 환율은 %lf입니다.\n", result);
	float c;
	printf("구입할 달러(USD)?");
	scanf("%f", &c);
	USD = result * c;
	printf("USD %.2f 살 때==> KRW %.2f", c, USD);
}

int main()
{
	solve();
	return 0;
}

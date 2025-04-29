/* 파일명: ch05-3

 * 내용:거스름돈의 금액을 입력받아 오만원,만원,천원,십원짜리가 각각 몇 개 필요한지 구해서 출력하시오. 십원 미만 단위는 절사한다.

 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result(int a)
{
	printf("거스론돈 (10원미만 절삭): %d\n", a);
	if (a >= 50000)
	{
		printf("50000원 \t%d\n", a / 50000);
		a = a % 50000;
	}

	if (a >= 10000)
	{
		printf("10000원 \t%d\n", a / 10000);
		a = a % 10000;

	}

	if (a >= 5000)
	{
		printf("5000원 \t%d\n", a / 5000);
		a = a % 5000;
	}

	if (a >= 1000)
	{
		printf("1000원 \t%d\n", a / 1000);
		a = a % 1000;
	}

	if (a >= 100)
	{
		printf("100원 \t%d\n", a / 100);
		a = a % 100;
	}

	if (a >= 10);
	{
		printf("10원 \t%d\n", a / 10);
	}
}

int main()
{
	int money = 0;

	printf("거스름돈? ");
	scanf("%d", &money);

	result(money);

	return 0;
}
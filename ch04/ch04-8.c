/* 파일명: ch04-8

   * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{

	int r=0;
	double result;
	const double PI = 3.141592;

	printf("반지름 길이?");
	scanf("%d", &r);

	double b = pow(r, 3);
	result = (4.0 / 3.0) * PI * b;
	printf("구의 부피:%lf\n", result);
}

int main()
{
	solve();
	return 0;
}


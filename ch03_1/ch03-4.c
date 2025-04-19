/* 파일명: ch03-4

   * 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오. 힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	float a, b;

	printf("힘(N)?");
	scanf("%f", &a);

	printf("이동거리(m)?");
	scanf("%f", &b);

	printf("일의 양:%.2f J\n", a * b);

}


int main()
{
	solve();
	return 0;
}
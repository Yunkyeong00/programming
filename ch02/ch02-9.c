/* 파일명: ch02-9

   * 내용: 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.3.22

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수로 %d입니다.\n", num, num);

}

int main()
{
	solve();
	return 0;
}
/* 파일명: ch02-10

   * 내용: 정수를 8진수, 10진수, 16진수중 하나를 입력받아 8진수, 10,진수, 16진수 각각 얼마에 해당하는지
 *       출력하는 프로그램을 작성하시오, 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.

   * 작성자: 조윤경

   * 날짜: 2025.3.21

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n ");
	printf("정수?");
	scanf("%x", &num);

	printf("8진수: 0%o\n 10진수: %d\n 16진수: %#x", num, num, num);

	return 0;
}

int main()
{
	solve();
	return 0;
}
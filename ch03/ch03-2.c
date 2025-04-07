/* 파일명: ch03-2

   * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	int a;
	printf("가로의 길이?");
	scanf("%d", &a);
	int b;
	printf("세로의 길이?");
	scanf("%d", &b);
	printf("직사각형 넓비:%d\n", a*b);
	printf("직사각형의 둘레:%d\n", 2*(a+b));

}


int main()
{
	solve();
	return 0;
}
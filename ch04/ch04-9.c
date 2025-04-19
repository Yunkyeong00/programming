/* 파일명: ch04-9

   * 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	int hour, minute, second;

	printf("재생시간(초)?");
	scanf("%d", &a);
    
	minute = a / 60;
	hour = minute / 60;
	minute = minute % 60;
		second = a % 60;
		printf("재생시간은 %d시간 %d분 %d초 입니다.\n", hour, minute, second);


}

int main()
{
	solve();
	return 0;
}
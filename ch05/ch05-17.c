/* 파일명: ch05-17

 * 내용:주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
 *		주차 요금은 최초 30은 2000원, 그 이후는 10분당 1000원씩으로 계산한다.하루 최대 25000원을 넘을 수 없다.
 *		주차 시간은 24시간을 넘을 수는 없다고 가정한다.

 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int solve()
{
	int m, t = 0;
	int run = 0;

	printf("주차 시간(분)? ");
	scanf("%d", &t);

	if (t > 1440)
	{
		printf("주차 시간은 최대 1440분을 넘을 수 없습니다.\n");
			
	}

	else if (t < 30)
	{
		m = 2000;
		printf("주차 요금 : 2000원\n");
	}
	else if (t > 30)    //최초 30분 넘겼을시.
	{
		t = t - 30;
		m =2000+ ((t + 9) / 10) * 1000;
		m = (m > 25000) ? 25000 : m;
		printf("주차요금 : %d원\n", m);
	}
}
int main()
{
	solve();
	return 0;
}
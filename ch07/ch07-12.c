/* 파일명:ch07-12

 * 내용: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
 *       예매할 좌석수를 입력받아 빈 자리를 할당한다.
 *       예매할 때마다 각 좌석의 상태를 출력한다. O이면 예약 가능, X는 예매 불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.
 * 
 * 작성자: 조윤경
 * 
 * 날짜:  2025.05.30
 * 
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//좌석 예매 함수
int solve()
{
	int s[10] = { 0 };
	int a = 0;
	int remain = 10; 

	while (s[9] == 0)
	{
		//현재 좌석 출력
		printf("현재 좌석 : [ ");
		for (int i = 0; i < 10; i++)
		{
			if (s[i] == 0)
			{
				printf("O ");//비어있으면 0
			}
			else
			{
				printf("X ");//예약이 되었으면 X
			}
		}
		printf("]\n");

		printf("예매할 좌석수? ");
		scanf("%d", &a);

		for (int i = 0; i < 10; i++)
		{
			if (s[i] == 0 && a > 0)
			{
				s[i] = 1;
				printf("%d ", i + 1);
				a--;
			}
		}
		printf(" 번 좌석을 예매했습니다.\n");
	}
}


int main()
{
	solve();
	return 0;
}
/* 파일명: ch06-19.c

 * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
        예를 들어 graph(1200, 100);은 100마다 *을 하나씩 출력하므로 *을 12개 출력하고,
		graph(1200, 10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다.
		0~9999사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프를 출력하는 프로그램을 작성하시오.

 * 작성자: 조윤경

 * 날짜:  2025.05.22
 * 
 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void graph(int num)
{
	printf("%d:", num); //숫자 출력
	for (int i = 0; i < num / 100; i++)
	{
		printf("*");
	}
	printf("\n");
}


int solve()
{
	srand(time(NULL));

	int a = rand() % 10000;
	int b = rand() % 10000;
	int c = rand() % 10000;

	graph(a);
	graph(b);
	graph(c);
}

int main()
{
	solve();

	return 0;
}
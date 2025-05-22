/* 파일명: ch06-18.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
   0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오
 
 * 작성자: 조윤경

 * 날짜:  2025.05.22
 * 
 * 버전: v1.0

 */



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void divisors(int num);

void divisors(int num)
{
	int count = 0;
	printf("%d의 약수: ", num);
	int i;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("총 %d개\n", count);
}

int solve ()
{
	srand(time(NULL));

	int a = rand() % 1000;
	int b = rand() % 1000;
	int c = rand() % 1000;
	divisors(a);
	divisors(b);
	divisors(c);

	return 0;
}

int main()
{
	solve();

	return 0;
}

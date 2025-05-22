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
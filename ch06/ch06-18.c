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

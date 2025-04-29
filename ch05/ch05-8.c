#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void solve()
{
	unsigned int a, b;
	char bit;

	printf("비트 연산식?");
	scanf("%i %c %i", &a, &bit, &b);

	if (bit == '&')
	{
		printf("%X %c %X=X",a ,bit,b,(a&b));
	}

	else if(bit=='|')
	{
		printf("%X %c %X=%X",a,bit,b,(a|b));
	}

	else if(bit=='^')
	{
		printf("%X %c %X=%X",a,bit,b,(a^b));
	}

	else
	{
		printf("잘못 입력하셨습니다.");
	}

	return 0;
}

int main()
{
	solve();
	return 0;
}
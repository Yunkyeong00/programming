#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int even = 0, odd = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	while (1) 
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		else if (is_even(num))
			even++;
		else if (is_odd(num))
			odd++;
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개 입니다.\n", even, odd);
	return 0;
}

int is_even(int num)
{
	return num % 2 == 0;
}

int is_odd(int num)
{
	return num % 2 != 0;
}
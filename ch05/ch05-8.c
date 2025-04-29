/* 파일명: ch05-8

 * 내용:비트 연산을 수행하는 계산기를 프로그램하시오. &비트는 AND |는 or, ^는 비트 XOR연산을 처리한다
 *		"0xAB & 0xCC" 처럼 연산식을 입력해서 연산 결과를 구한다.
 *		비트 연산이므로 연산식을 입력받을 때 10진수, 8진수 16진수를 사요하 수 있게 하고 연산의 결과는 16진수로 출력한다.
 * 
 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

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
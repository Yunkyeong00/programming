/* 파일명: ch05-4

 * 내용:연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 윤년이 되는 조건은 다음과 같다.
 
 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	solve();
	return 0;

}

int solve()
{
	int a;
	int num;
	int numm;
	printf("연도?");
	scanf("%d", &a);
	num = a % 4;
	numm = num % 100;


	if (a % 4 == 0)
		printf("%d은 윤년입니다", a);

	else if (num % 100 == 0)
		printf("%d은 윤년이 아닙니다",a);

	else if(num % 400 == 0)
		printf("%d은 윤년입니다", a);

	return 0;

}
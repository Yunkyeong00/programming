/* 파일명: ch05-5

 * 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오. 
								"27 C" 또는 27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다. 
								함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고,
								입력된 문자가 'F'면 화씨 온도이므로 섭씨 온도를 구해서 출력한다.
 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int solve()
{
	char ch;
	float temp;

	float result;

	printf("온도? ");
	scanf("%f %c", &temp, &ch);

	if (ch == 'c' || ch == 'C')
	{
			result = (temp * (9.0 / 5.0)) + 32.0;
			printf("%.2f C ==> %.2f F", temp, result);
	}

		else if (ch == 'f' || ch == 'F')
	{
			result = (temp - 32.0) * (5.0 / 9.0);
			printf("%.2f F ==> %.2f C", temp, result);
	}

		else
	{
			printf("잘못입력하셨습니다.\n");
	}
}

int main()
{
	solve();
	return 0;

}
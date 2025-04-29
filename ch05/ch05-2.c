/* 파일명: ch05-1.c

 * 내용: 
 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	solve();
	return 0;
}

int solve()
{
	double a;
	double b;
	printf("점의 좌표(x,y)?");
		scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
		printf("1사분면에 있습니다");

	else if (a < 0 && b>0)
		printf("2사분면에 있습니다");

	else if (a < 0 && b>0)
		printf("3사분면에 있습니다");

	else if (a < 0 && b>0)
		printf("4사분면에 있습니다");

	return;

}

/*int main()
{
	solve();
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int solve()
{
	int a1, b1=0;
	int a2, b2=0;
	int x, y=0;

	printf("선택 영역의 좌상단점(left, top)?");
	scanf("%d %d", &a1, &b1);

	printf("선택 영역의 우하단점(right, bottom)?");
	scanf("%d %d", &a2, &b2);

	printf("점의 좌표(x,y)?");
	scanf("%d %d", &x, &y);

	if (a1 < x && a2 > x  &&  b1 < y && b2 > y)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}

	else
	{
		printf("직사각형 모양의 선택 영역에 있지 않습니다.");
	}

	return 0;
}

int main()
{
	solve();
	return 0;
}
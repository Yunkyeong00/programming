#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int solve()
{
	int a1, b1=0;
	int a2, b2=0;
	int x, y=0;

	printf("���� ������ �»����(left, top)?");
	scanf("%d %d", &a1, &b1);

	printf("���� ������ ���ϴ���(right, bottom)?");
	scanf("%d %d", &a2, &b2);

	printf("���� ��ǥ(x,y)?");
	scanf("%d %d", &x, &y);

	if (a1 < x && a2 > x  &&  b1 < y && b2 > y)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}

	else
	{
		printf("���簢�� ����� ���� ������ ���� �ʽ��ϴ�.");
	}

	return 0;
}

int main()
{
	solve();
	return 0;
}
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
	printf("����?");
	scanf("%d", &a);
	num = a % 4;
	numm = num % 100;


	if (a % 4 == 0)
		printf("%d�� �����Դϴ�", a);

	else if (num % 100 == 0)
		printf("%d�� ������ �ƴմϴ�",a);

	else if(num % 400 == 0)
		printf("%d�� �����Դϴ�", a);

	return 0;

}
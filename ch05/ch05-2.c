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
	printf("���� ��ǥ(x,y)?");
		scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
		printf("1��и鿡 �ֽ��ϴ�");

	else if (a < 0 && b>0)
		printf("2��и鿡 �ֽ��ϴ�");

	else if (a < 0 && b>0)
		printf("3��и鿡 �ֽ��ϴ�");

	else if (a < 0 && b>0)
		printf("4��и鿡 �ֽ��ϴ�");

	return;

}

/*int main()
{
	solve();
	return 0;
}*/

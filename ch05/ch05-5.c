#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int solve()
{
	char ch;
	float temp;

	float result;

	printf("�µ�? ");
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
			printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}

int main()
{
	solve();
	return 0;

}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�.\n", num, num);

	return 0;
}
/* ���ϸ�: ch06-5

 * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even() �Լ��� Ȧ������ �˻��ϴ� is_odd() �Լ��� �ۼ��Ͻÿ�.
 * �� �Լ��� �̿��ؼ� 0�� �Է� �� ������ �Էµ� �����鿡 ���ؼ� ¦���� Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * 
 * �ۼ���:������

 * ��¥: 2025.05.22

 * ����: v1.0

 */



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int even = 0, odd = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1) 
	{
		scanf("%d", &num);
		if (num == 0)
			break;

		else if (is_even(num))
			even++;
		else if (is_odd(num))
			odd++;
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.\n", even, odd);
	return 0;
}

int is_even(int num)
{
	return num % 2 == 0;
}

int is_odd(int num)
{
	return num % 2 != 0;
}
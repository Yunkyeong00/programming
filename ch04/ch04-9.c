/* ���ϸ�: ch04-9

   * ����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	int a;
	int hour, minute, second;

	printf("����ð�(��)?");
	scanf("%d", &a);
    
	minute = a / 60;
	hour = minute / 60;
	minute = minute % 60;
		second = a % 60;
		printf("����ð��� %d�ð� %d�� %d�� �Դϴ�.\n", hour, minute, second);


}

int main()
{
	solve();
	return 0;
}
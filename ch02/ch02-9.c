/* ���ϸ�: ch02-9

   * ����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.3.22

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
	int num;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %x�� 10������ %d�Դϴ�.\n", num, num);

}

int main()
{
	solve();
	return 0;
}
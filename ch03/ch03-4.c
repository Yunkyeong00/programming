/* ���ϸ�: ch03-4

   * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.04.07

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	float a, b;

	printf("��(N)?");
	scanf("%f", &a);

	printf("�̵��Ÿ�(m)?");
	scanf("%f", &b);

	printf("���� ��:%.2f J\n", a * b);

}


int main()
{
	solve();
	return 0;
}
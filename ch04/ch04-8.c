/* ���ϸ�: ch04-8

   * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �̶� ���̴� 3.141592��� ����.

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void solve()
{

	int r=0;
	double result;
	const double PI = 3.141592;

	printf("������ ����?");
	scanf("%d", &r);

	double b = pow(r, 3);
	result = (4.0 / 3.0) * PI * b;
	printf("���� ����:%lf\n", result);
}

int main()
{
	solve();
	return 0;
}


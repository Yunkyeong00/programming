/* ���ϸ�: ch03-1

   * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.04.07

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	float a;
	float b;
	printf("USD?");
	scanf("%f", &a);
	printf("��/�޷��� ȯ��?");
	scanf("%f", &b);
	printf("USD %.2f=KRW %.2f%", a, a * b);

}

int main()
{
	solve();
    return 0;
}
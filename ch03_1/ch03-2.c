/* ���ϸ�: ch03-2

   * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.04.07

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	int a;
	printf("������ ����?");
	scanf("%d", &a);
	int b;
	printf("������ ����?");
	scanf("%d", &b);
	printf("���簢�� �к�:%d\n", a*b);
	printf("���簢���� �ѷ�:%d\n", 2*(a+b));

}


int main()
{
	solve();
	return 0;
}
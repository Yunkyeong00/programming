/* ���ϸ�: ch02-5

   * ����: �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.

   * �ۼ���: ������

   * ��¥: 2025.3.22

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    float weight;

    printf("������? ");
    scanf("%f", &weight);

    printf("�Է��� �����Դ� %.2fKG�Դϴ�.\n", weight);

}

int main()
{
    solve();
    return 0;
}
/* ���ϸ�: ch02-

   * ����: ������ ���� Ǯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, printf���� �ѹ��� ����Ѵ�.

   * �ۼ���: ������

   * ��¥: 2025.3.21

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
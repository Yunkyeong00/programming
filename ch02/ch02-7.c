/* ���ϸ�: ch02-7

   * ����: Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.3.22

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    char size;
    int num;

    printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
    scanf("%c %d", &size, &num);

    printf("%c������ %d���� �ֹ��մϴ�.\n", size, num);


    return 0;
}

int main()
{
    solve();
    return 0;
}
/* ���ϸ�: ch10-13

  * ����: RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ�
  ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�
  RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.06.07

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // �� ����ü ����
struct POINT
{
    int x;
    int y;
};

// �簢�� ����ü ����
struct RECT
{
    struct POINT left_bottom;
    struct POINT right_top;
};

// ��� �Լ�
void print_rect(struct RECT r)
{
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n",
        r.left_bottom.x, r.left_bottom.y,
        r.right_top.x, r.right_top.y);
}

int slove()
{
    struct RECT rect;

    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    print_rect(rect);

    return 0;
}

int main()
{
    slove();

    return 0;
}
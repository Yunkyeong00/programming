/* ���ϸ�: ch10-8

  * ����: PRODUCT ����ü�� �����Ͻÿ�. �� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
  PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
  PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.06.06

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // ����ü ����
struct PRODUCT
{
    char name[20];   // ��ǰ��
    int price;       // ����
    int stock;       // ��� ����
};


void print_product(struct PRODUCT p) 
{
    printf("[%s: %d�� ���:%d]\n", p.name, p.price, p.stock);
}

int slove()
{
    struct PRODUCT p;

    printf("��ǰ��? ");
    scanf("%s", p.name);

    printf("����? ");
    scanf("%d", &p.price);

    printf("���? ");
    scanf("%d", &p.stock);

    print_product(p);

    return 0;
}

int main()
{
    slove();

    return 0;
}
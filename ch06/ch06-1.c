/* ���ϸ�: ch06-1

 * ����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�.
         get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���:������

 * ��¥: 2025.05.16

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_perimeter()
{

    int a;
    printf("����?");
    scanf("%d", &a);

    int b;
    printf("����?");
    scanf("%d", &b);

    int result;

    result = 2*(a+b);
    printf("���簢�� �ѷ� : % d", result);

}


int main()
{

    get_perimeter();
    return 0;

}


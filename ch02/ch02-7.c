#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char size;
    int num;

    printf("커피 사이즈(S,T,G)와 주문 수량?");
    scanf("%c %d", &size, &num);

    printf("%c사이즈 %d잔을 주문합니다.\n", size, num);


    return 0;
}
/* 파일명: ch02-7

   * 내용: 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오. 커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.3.22

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    char size;
    int num;

    printf("커피 사이즈(S,T,G)와 주문 수량?");
    scanf("%c %d", &size, &num);

    printf("%c사이즈 %d잔을 주문합니다.\n", size, num);


    return 0;
}

int main()
{
    solve();
    return 0;
}
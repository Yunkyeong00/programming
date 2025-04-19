/* 파일명: ch04-2

   * 내용: 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
    float f;
    float c;
    printf("화씨 온도?");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("%.2f F=%.2f C", f, c);
    
}

int main()
{
    solve();
    return 0;
}
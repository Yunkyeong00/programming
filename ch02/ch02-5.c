/* 파일명: ch02-

   * 내용: 다음과 같이 풀력하는 프로그램을 작성하시오. 단, printf문은 한번만 사용한다.

   * 작성자: 조윤경

   * 날짜: 2025.3.21

   * 버전: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    float weight;

    printf("몸무게? ");
    scanf("%f", &weight);

    printf("입력한 몸무게는 %.2fKG입니다.\n", weight);

}

int main()
{
    solve();
    return 0;
}
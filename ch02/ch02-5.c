/* 파일명: ch02-5

   * 내용: 몸무게를 입력받아서 출력하는 프로그램을 작성하시오. 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.

   * 작성자: 조윤경

   * 날짜: 2025.3.22

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
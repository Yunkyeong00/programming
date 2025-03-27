/* 파일명: ch02-2

   * 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.3.21

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve()
{
    int num;
    float score;

    printf("번호?\n");
    scanf("%d", &num);

    printf("학점?\n");
    scanf("%f", &score);

    printf("%d번 학생의 학점은 %f입니다.\n", num, score);

}

int main()
{
    solve();
    return 0;
}
/* 파일명: ch07-6

 * 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
 *       실수형 배열의 초기값은 마음대로 정하시오.
 *
 * 작성자: 조윤경
 *
 * 날짜:  2025.05.28
 *
 * 버전: v1.0

 */

#include <stdio.h>
#define num 10

//크기가 10인 실수형 배열,역순으로 만드는 함수
int solve()
{
    float x[num] = { 1.2,3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int i;

    //배열
    printf("배열: ");
    for (i = 0; i < num; i++) 
    {
        printf("%.1f ", x[i]);
    }
    printf("\n");

    //역순 출력
    printf("역순: ");
    for (i = num - 1; i >= 0; i--) 
    {
        printf("%.1f ", x[i]);
    }

 

}


int main()
{
    solve();

    return 0;
}
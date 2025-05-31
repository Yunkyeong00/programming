/* 파일명: ch07-4

 * 내용: 특정 값으로 초기화된 정수형 배열에 대해서 배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서
 * 인덱스와 값을 함께 출력하는 프로그램을 작성하시오. 배열의 초기값은 마음대로 정하시오.
 *
 * 작성자: 조윤경
 * 
 * 날짜:  2025.05.28
 * 
 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 10


//배열의 최댓값과 최솟값을 찾는 함수
int solve() 
{
    int x[num] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int i;

    printf("배열: ");
    for (i = 0; i < num; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    //최댓값 찾기
    int big = x[0];
    int index = 0; 

    for (i = 0; i < num; i++) 
    {
        if (x[i]>big) 
        {     
            big = x[i];
            index = i;
        }
    }
    //최솟값 찾기
    int small = x[0];
    int min_index = 0;
    for (i = 1; i < num; i++) {
        if (x[i] < small) {
            small = x[i];
            min_index = i;
        }
    }
    //결과 출력
    printf("최댓값: 인덱스=%d, 값:%d \n", index, big);
    printf("최솟값: 인덱스=%d, 값:%d \n", min_index,small);

    return 0;
}

int main()
{
    solve();

    return 0;
}


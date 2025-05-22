/* 파일명: ch06-1

 * 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오.
         get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.

 * 작성자:조윤경

 * 날짜: 2025.05.16

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_perimeter()
{

    int a;
    printf("가로?");
    scanf("%d", &a);

    int b;
    printf("세로?");
    scanf("%d", &b);

    int result;

    result = 2*(a+b);
    printf("직사각형 둘레 : % d", result);

}


int main()
{

    get_perimeter();
    return 0;

}


/* 파일명: ch03-1

   * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
        int a;
		printf("한 변의 길이?");
		scanf("%d", &a);
    	printf("정사각형 넓비의 길이:%d\n", a * a);
	    printf("정사각형의 둘레:%d\n", a*4);

}


int main()
{
	    solve();
		return 0;
}
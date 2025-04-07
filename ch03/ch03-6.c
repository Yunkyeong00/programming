/* 파일명: ch03-6

   * 내용:  아파트의 면접을 제곱미터(m^2)로 입력받아 센티미터(cm)로 변환하는 프로그램을 작성하시오. 1m^2는 0.3025평에 해당한다, 프로그램을 작성할 때 이름 있는 상수를 이용해보자.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
	double a;
	printf("아파트의 면적(제곱미터)?");
	scanf("%lf", &a);
	printf("%.2lf 제곱미터=%.2f 평\n" ,a,a*0.3025);
	
}


int main()
{
	solve();
	return 0;
}
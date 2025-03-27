/* 파일명: ch02-3

   * 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.3.21

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve() 
{

	int year;
	int month;
	int num;


	printf("연?");
	scanf("%d", &year);

	printf("월?");
	scanf("%d", &month);

	printf("일?");
	scanf("%d", &num);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, num);


}

int main()
{	
	solve();
	return 0;
}
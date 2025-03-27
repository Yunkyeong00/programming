/* 파일명: ch02-10

   * 내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오. 학생의 번호는 정수로, 학점은 실수로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.3.21

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n ");
	printf("정수?");
	scanf("%x", &num);

	printf("8진수: 0%o\n 10진수: %d\n 16진수: %#x", num, num, num);

	return 0;
}
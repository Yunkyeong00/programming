/* 파일명: ch03-3

   * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg 단위, 높이는 m단위로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.04.07

   * 버전: v1.0

   */

double calcPositionEnergy(double weight, double height);

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303(void)
{
	double a=0, b=0;
	printf("질량(kg)?");
	scanf("%lf", &a);
	printf("높이(m)?");
	scanf("%lf", &b);

	double energy = calcPositionEnergy(a,b);

	printf("위치에너지:%lfJ\n", energy);

	return;
}

double calcPositionEnergy(double weight, double height)
{
	double energy = weight * height*9.8;
	return energy;
}

int main()
{
	assignment0303();
	return 0;
}
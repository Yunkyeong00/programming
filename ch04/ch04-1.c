/* 파일명: ch04-1

   * 내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.질량은 kg 단위, 속력은 m/s 단위로 입력받는다.

   * 작성자: 조윤경

   * 날짜: 2025.04.09

   * 버전: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();

	return r;
}

/*
함수명:assignment0401()
기능(책임): 질량,속력을 입력받음,운동에너지를 계산하도록 함수호출, 그 결과를 콘솔에 출력
입력:없음
반환:정수이며 0이면 성공,그외 값은 에러이다.
*/

int assignment0401(void)
{
	//1.질량과 속도를 입력 받아 저장
	double w = 0.0; //질량 kg
	double v = 0.0; //속력 m/s
	printf("질량 속도를 입력해주세요.");
	scanf("%lf %lf", &w, &v);

	//2.운동에너지를 계산
	double result = getMotionEnergy(w, v);

	//3.계산된 결과 출력
	printf("질량=%.2f kg, 속력%.2f m/s의 운동에너지는 %2.f 입니다", w, v, result);

	return 0;
}


/*함수명:getMotionEnergy()
기능(책임):질량 속력 입력받아 운동에너지를 계산하여 반환
*/

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	//에너지=1/2*질량*속도*속도
	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;
}

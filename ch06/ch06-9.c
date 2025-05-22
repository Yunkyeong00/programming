/* 파일명: ch06-9.c

 * 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 kae_rgb 함수를 정의하시오.
 *       앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
 * 
 * 작성자: 조윤경

 * 날짜: 2025.05.22

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb()
{
	int rgb;
	printf("RGB 색상?");
	scanf("%x", &rgb);

	printf("RGB %06X의 보색 : 0x%02X%02X%02X\n", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));

	return 0;
}

int get_red(int rgb)
{
	return 255 - ((rgb & ~(0xFF00FFFF)) >> 16);
}

int get_green(int rgb) 
{
	return 255 - ((rgb & ~(0xFFFF00FF)) >> 8);
}

int get_blue(int rgb) 
{
	return 255 - (rgb & ~(0xFFFFFF00));
}

int main()
{
	make_rgb();
	return 0;
}







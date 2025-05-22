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







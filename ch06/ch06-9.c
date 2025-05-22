/* ���ϸ�: ch06-9.c

 * ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� kae_rgb �Լ��� �����Ͻÿ�.
 *       �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * 
 * �ۼ���: ������

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb()
{
	int rgb;
	printf("RGB ����?");
	scanf("%x", &rgb);

	printf("RGB %06X�� ���� : 0x%02X%02X%02X\n", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));

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







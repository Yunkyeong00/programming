/* ���ϸ�: ch04-16

   * ����: ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�.
								 ��ǻ�� �ý��ۿ����� 32��Ʈ �������� �� ���� ����Ʈ���� red, green, blue�� ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���.
								 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB �� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
								 RGB ������ ����� ���� ����Ʈ ������ �˾ƺ��� ������ 16������ ����Ѵ�.
   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void solve()
{
	unsigned char a,b,c;
	int rgb;

	printf("red?");
	scanf("%hhu", &a);

	printf("green?");
	scanf("%hhu", &b);

	printf("blue?");
	scanf("%hhu", &c);

	rgb = a | b << 8 | c << 16;
	printf("RGB Ʈ���÷�:%06X", rgb);
	 

}

int main()
{
	solve();
	return 0;
}
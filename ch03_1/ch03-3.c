/* ���ϸ�: ch03-3

   * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����, ���̴� m������ �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.04.07

   * ����: v1.0

   */

double calcPositionEnergy(double weight, double height);

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0303(void)
{
	double a=0, b=0;
	printf("����(kg)?");
	scanf("%lf", &a);
	printf("����(m)?");
	scanf("%lf", &b);

	double energy = calcPositionEnergy(a,b);

	printf("��ġ������:%lfJ\n", energy);

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
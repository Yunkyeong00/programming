/* ���ϸ�: ch04-1

   * ����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.������ kg ����, �ӷ��� m/s ������ �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.04.09

   * ����: v1.0

   */


#include <stdio.h>

void f1(void);
int f3(int a, int b);

int main()
{
	int x = 3;
	f1();
	int result = f3(2,3);


	return 1;
}

void f1(void)
{
	//1. hello ���
	printf("�ȳ�! ���� �� �Ҿƹ�����\n");

	return;
}

/*
�Լ���: int f3(int a, intb)
���: �Էµ� �� �� a, b �� ���ؼ� ��ȯ
�Է� a b�� ����
��ȯ: ����
*/

int f3(int a, int b)
{
	int result = 0;

	//�� ���� ���ؼ� ��ȯ
	result = a + b;

	return result;
}
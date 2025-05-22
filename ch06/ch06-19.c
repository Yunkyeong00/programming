/* ���ϸ�: ch06-19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
        ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�,
		graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�.
		0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥:  2025.05.22
 * 
 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void graph(int num)
{
	printf("%d:", num); //���� ���
	for (int i = 0; i < num / 100; i++)
	{
		printf("*");
	}
	printf("\n");
}


int solve()
{
	srand(time(NULL));

	int a = rand() % 10000;
	int b = rand() % 10000;
	int c = rand() % 10000;

	graph(a);
	graph(b);
	graph(c);
}

int main()
{
	solve();

	return 0;
}
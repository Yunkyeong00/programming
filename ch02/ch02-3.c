/* ���ϸ�: ch02-3

   * ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.

   * �ۼ���: ������

   * ��¥: 2025.3.21

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void solve() 
{

	int year;
	int month;
	int num;


	printf("��?");
	scanf("%d", &year);

	printf("��?");
	scanf("%d", &month);

	printf("��?");
	scanf("%d", &num);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, num);


}

int main()
{	
	solve();
	return 0;
}
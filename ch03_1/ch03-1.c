/* ���ϸ�: ch03-1

   * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

   * �ۼ���: ������

   * ��¥: 2025.04.07

   * ����: v1.0

   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void solve()
{
        int a;
		printf("�� ���� ����?");
		scanf("%d", &a);
    	printf("���簢�� �к��� ����:%d\n", a * a);
	    printf("���簢���� �ѷ�:%d\n", a*4);

}


int main()
{
	    solve();
		return 0;
}
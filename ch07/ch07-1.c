/* ���ϸ�: ch07-1

 * ����: ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
          ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
          ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 *
 * �ۼ���: ������

 * ��¥: 2025.05.28

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���������� ���۰��� ������ �Է¹޴� �Լ�
int solve()
{
	int a;//ù��° ��
	printf("ù ��° ��?");
	scanf("%d", &a);

	int b;//����
	printf("����?");
	scanf("%d", &b);

	arr(a, b);
}
//�������� ����ϴ� �Լ�
int arr(int first,int diff)
{
	int i;
	for (i=0; i<10;i++)
	{
		int result = first + diff * i;
		printf("%d ", result);
	}

}

int main()
{
	solve();
	return 0;
}
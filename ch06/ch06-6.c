/* ���ϸ�: ch06-6

 * ����: ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��Ͻÿ�.
 *       ���� �߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ�� ������ ??���� ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ� �Ѵ�.
 *        ��, choose_menu �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�.
 *        choose_menu�� ���� ���� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���:������

 * ��¥: 2025.05.22

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int choose_menu(void)
{
	int menu;
	printf("[1.���Ͽ��� 2.���� ���� 3.�μ� 0.����] ����?");
	scanf("%d", &menu);
	return menu;
}

int main()
{
	while (1)
	{
		int menu;
		menu = choose_menu();
		
		switch (menu)
		{
		case 1:

			printf("���� ���⸦ �����մϴ�.\n");
			break;

		case 2:
			printf("���� ������ �����մϴ�.\n");
			break;

		case 3:
			printf("�μ⸦ �����մϴ�.\n");
			break;
		case 0:
			printf("���α׷��� �����մϴ�.\n");
			return 0;
		}
	}
}



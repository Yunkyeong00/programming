/* ���ϸ�: ch10-1

  * ����: LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.06.05

  * ����: v1.0

  */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct login
{
	char ID[20];
	char Password[20];
};

void plogin(struct login user) 
{
	printf("ID: %s\n", user.ID);
	printf("PW: ");

	for (int i = 0; i < strlen(user.Password); i++) 
	{
		printf("*");
	}
	printf("\n");
}

struct login solve()
{
	struct login user;

	printf("ID? ");
	scanf("%s", user.ID);
	printf("Password? ");
	scanf("%s", user.Password);

	return user;
}

int main()
{
	struct login user = solve();

	plogin(user);

	return 0;
}
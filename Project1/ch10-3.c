/* ���ϸ�: ch10-3

  * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
  ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������
  ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ
  5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

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

// �α��� ���� �Լ�
int check(struct login users[], char id[], char pw[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(users[i].ID, id) == 0 && strcmp(users[i].Password, pw) == 0) {
            return 1; // �α��� ����
        }
    }

    return 0; 
}

int slove() 
{
    struct login users[5] =
    {
        {"guest", "idontknow"},
        {"admin", "1234"},
        {"user1", "pw1"},
        {"user2", "pw2"},
        {"user3", "pw3"}
    };

    char id[20], pw[20];

    while (1)
    {
        printf("ID? ");
        scanf("%s", id);

        if (!strcmp(id, "."))
        {
            break;
        }

        printf("PW? ");
        scanf("%s", pw);

        if (check(users, id, pw)) 
        {
            printf("�α��� ����\n");
        }
        else 
        {
            printf("�α��� ����\n");
        }
    }

    return 0;
}

int main()
{
    slove();

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void introMe(void); //����� ���� �Լ� ����

int main() { //�����Լ�

	introMe();

	return 0;
}

void introMe() { //����� ���� �Լ� ����

	char name[64];
	int age;
	char hello[256];

	printf("�̸�, ����, �λ��� �Է����ּ��� : \n");
	scanf("%s %d %s", name, &age, hello);

	printf("�̸� : %s ���� : %d \n �λ� : %s", name, age, hello);

	return ; 
}


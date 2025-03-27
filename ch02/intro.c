#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void introMe(void); //사용자 지정 함수 선언

int main() { //메인함수

	introMe();

	return 0;
}

void introMe() { //사용자 지정 함수 정의

	char name[64];
	int age;
	char hello[256];

	printf("이름, 나이, 인삿말을 입려해주세요 : \n");
	scanf("%s %d %s", name, &age, hello);

	printf("이름 : %s 나이 : %d \n 인삿말 : %s", name, age, hello);

	return ; 
}


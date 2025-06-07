#include <stdio.h>
#include "contact.h"//함수 선언 헤더

void testContact();

int main()
{

	testContact();

	return 0;

}

void testContact()
{
	Contact c1 = { "홍길동","010685755315" , MAN ,2025 };
	Contact c2 = { "홍길동","010665753615" , MAN ,2025 };
	Contact c3 = { "홍길동","010685757315" , MAN ,2025 };

	printContact(c1);//구조체 c1을 복사해서 함수에 넘김
	printContactPtr(&c2);//주소만 넘김

	int resultt1 = isEqualContact(c1, c2);
	int resultt2 = isEqualContactPtr(&c2, &c3);
	
	printf("c1과 c2는 %s\n", resultt1 ? "같습니다" : "다릅니다");
	printf("c2과 c3는 %s\n", resultt2 ? "같습니다" : "다릅니다");

}
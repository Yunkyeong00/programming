//#pragma once
//헤더파일 2번 읽는 것을 방지함
#ifndef _CONTACT_H_1298475575//아직 정의 안 돼었는지 확인
#define _CONTACT_H_1298475575//정의해둠


enum gender {MAN,WOMAN};// MAN은 0,WOMAN은 1
typedef enum gender EGender;//enum gender이거를 EGender이렇게 부른다

//
struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;

};

typedef struct contact Contact;
//선언
int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
int isEqualContactPtr(const Contact* a, const Contact* b);
void printContactPtr(const Contact* ct);



#endif //_CONTACT_H_1298475575 조건문 끝
//#pragma once
//������� 2�� �д� ���� ������
#ifndef _CONTACT_H_1298475575//���� ���� �� �ž����� Ȯ��
#define _CONTACT_H_1298475575//�����ص�


enum gender {MAN,WOMAN};// MAN�� 0,WOMAN�� 1
typedef enum gender EGender;//enum gender�̰Ÿ� EGender�̷��� �θ���

//
struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;

};

typedef struct contact Contact;
//����
int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
int isEqualContactPtr(const Contact* a, const Contact* b);
void printContactPtr(const Contact* ct);



#endif //_CONTACT_H_1298475575 ���ǹ� ��
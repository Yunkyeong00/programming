
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int result(int a)
{
	int money50000;
	int money10000;
	int money5000;
	int money1000;
	int money100;
	int money10;

	money50000 = a / 50000;
	a = a % 50000;

	money10000 = a / 10000;
	a = a % 10000;

	money5000 = a / 5000;
	a = a % 5000;

	money1000 = a / 1000;
	a = a % 1000;

	money100 = a / 100;
	a = a % 100;

	money10 = a / 10;
	a = a % 10;

		printf("50000�� %d��\n", money50000);
	    printf("50000�� %d��\n", money10000);
	    printf("50000�� %d��\n", money5000);
	    printf("50000�� %d��\n", money1000);
	    printf("50000�� %d��\n", money100);
	    printf("50000�� %d��\n", money10);

		return 0;

}



int test()
{
	int a = 0;


	a -= a % 10;
	
	printf("�Ž�����?");
	scanf("%d", &a);

	printf("�Ž����� (10��)�̸� ����:%d\n",a);

	result(a);
	
	return 0;

}

int main()
{
	test();
	return 0;
}
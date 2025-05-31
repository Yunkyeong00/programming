/* 파일명: ch07-8

 * 내용: 상품 가격이 저장된 정수형 배열에 대해서 할인율(%)/를 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
 *       상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다.
 *        할인된 가격은 별도의 배열에 저장해야한다.
 * 
 * 작성자: 조윤경
 *
 * 날짜:  2025.05.28
 *
 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//상품입력-할인율 입력-할인가 계산,출력 함수
int solve()
{
	int price[5];
	int discount[5];
	int i;
	//5개의 상품 가격 입력
	printf("상품가 5개를 입력하세요:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &price[i]);
	}

	int h;//할인율
	printf("할인율(%%)?");
	scanf("%d", &h);

	//할인가격 계산
	for (i = 0; i < 5; i++)
	{
		discount[i] = price[i] - (price[i] * h / 100);
	}

	for (i = 0; i < 5; i++)
	{
		printf("가격: %6d → 할인가: %6d\n", price[i], discount[i]);
	}


	
}
int main()
{
	solve();
	return 0;
}
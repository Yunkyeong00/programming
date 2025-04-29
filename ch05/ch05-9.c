/* 파일명: ch05-9

 * 내용: 햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고,
 *		세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고,
 *		나머지는 단품으로 계산하도록 한다. 예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면
 *		계산은 세트 1, 햄버거 1, 감자튀김 2로 해야한다.

 * 작성자:조윤경

 * 날짜: 2025.4. 29

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int solve()
{
	int ham = 0;
	int potato = 0;
	int cola = 0;
	int set = 0;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");


	printf("함버거 개수?");
	scanf("%d", &ham);
	printf("감자튀김 개수?");
	scanf("%d", &potato);
	printf("콜라 개수?");
	scanf("%d", &cola);

	set = ham < cola ? ham : cola;
	set = set < potato ? set : potato;

	ham -= set;
	potato -= set;

	printf("\n\n상품명	    	 단가	수량	     금액\n");
	printf("세트		6500	 %d	     %d\n", set, set * 6500);
	printf("햄버거		4000	 %d	     %d\n", ham, ham * 4000);
	printf("감자튀김	2000	 %d	     %d\n", potato, potato * 4000);
	printf("----------------------------------------------\n");  
	printf("합계		     	       	%d", (set * 6500) + (ham * 4000) + (potato * 2000));

}

int main()
{
	solve();
	return 0;
}

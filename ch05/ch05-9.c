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

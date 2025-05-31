/* 파일명: ch07-1

 * 내용: 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
          크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
          첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오. 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
 *
 * 작성자: 조윤경

 * 날짜: 2025.05.28

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//등차수열의 시작값과 공차를 입력받는 함수
int solve()
{
	int a;//첫번째 항
	printf("첫 번째 항?");
	scanf("%d", &a);

	int b;//공차
	printf("공차?");
	scanf("%d", &b);

	arr(a, b);
}
//등차수열 출력하는 함수
int arr(int first,int diff)
{
	int i;
	for (i=0; i<10;i++)
	{
		int result = first + diff * i;
		printf("%d ", result);
	}

}

int main()
{
	solve();
	return 0;
}
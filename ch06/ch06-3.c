/* 파일명: ch06-3

 * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. 
           distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선거리를 구하는 프로그램을 작성하시오.

 * 작성자:조윤경

 * 날짜: 2025.05.22

 * 버전: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


double distance(float a, float b, float c, float d)
{
    return sqrt((c - a) * (c - a) + (d - b) * (d - b));
}


int main()
{
    float a, b, c, d;
    printf("직선의 시작점 좌표?");
    scanf("%f %f", &a, &b);

    printf("직선의 끝점 좌표?");
    scanf("%f %f", &c, &d);

    double result = distance(a, b, c, d);
    result = sqrt((c - a) * (c - a) + (d - b) * (d - b));

    printf("(%.0f, %.0f)~(%.0f, %.0f) 직선의 길이: %.6f\n", a, b, c, d, result);


    return 0;

}

/*int main()
{
    distance();

    return 0;

}

float distance()
{
    float a, b, c, d;
    printf("직선의 시작점 좌표?");
    scanf("%f %f", &a, &b);

    printf("직선의 끝점 좌표?");
    scanf("%f %f", &c, &d);

    double result;
    result =sqrt((c - a) * (c - a) + (d - b) * (d - b));

      printf("(%.0f, %.0f)~(%.0f, %.0f) 직선의 길이: %.6f\n", a, b, c, d, result);


}*/
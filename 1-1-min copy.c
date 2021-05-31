#include<stdio.h>

int main()
{   //사다리꼴 위변 * 아랫변 *높이 /2
    int a, b, c; //a는 윗변 ,b는 아랫변, c는높이
    double d; //d는 넓이

    printf("사다리꼴의 윗변:");
    scanf_s("%d", &b);
    printf("사다리꼴의 밑변:");
    scanf_s("%d", &a);
    printf("사다리꼴의 높이:");
    scanf_s("%d", &c);
    printf("계산식 : (%d + %d) * %d / 2\n", b, a, c);
    d = (a + b) * c / 2.0;
    printf("결과:%.0lf\n", d);
    return 0;
}
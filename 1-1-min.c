/*과제 1-2*/

#include <stdio.h> // printf() 와 scanf()를 사용 하기 위해 선언한다.

int main()
  {
    int a, b, c; // 밑변, 윗변, 높이를 저장할 변수 선언 한다
    double p; // 넓이 변수를 선언한다.

    printf("윗변을 입력하세요. : "); // 윗변, 밑변, 높이 순으로 입력한다.
    scanf("%d", &b); 
    printf("밑변을 입력하세요. : "); 
    scanf("%d", &a);
    printf("높이을 입력하세요. : "); 
    scanf("%d", &c); 
    p = (a + b) * c / 2.0; //사다리꼴 공식을 계산한다.
    printf("사다리꼴의 넓이는%.03lf입니다.\n", p); // 소수점 3자리의 결과 값을 출력한다.

    return 0;
}


#include <stdio.h> 
int a, b, c; //정수 저장 변수 선언
int mean(int x, int y); // 사용자 함수 원형

/* 메인 함수 */
int main() 
{
  printf("2개의 정수값을 입력하세요. \n");
  printf("첫 번쨰 정수의 값을 입력하세요. : "); // 1번째 정수 입력
  scanf("$d", &a);
  printf("두 번째 정수의 값을 입력하세요. : "); // 2번째 정수 입력
  scanf("$d", &b);
  
  c = mean(a, b); // 함수 호출에 의해 두 수의 평균값을 정수로 구한 후 부호를 변경한 값을 받음
  printf("a(%d)와 b(%d)의 평균값에 부호를 반전한 값은 %d입니다.", a, b, c);
}
/*두 수의 평균값을 정수로 구한 후 부호를 변경한 값을 리턴*/
int mean(int x, int y)
{
  return -((x + y)/2);
}

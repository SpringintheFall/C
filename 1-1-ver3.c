#include <stdio.h> 
int main(){

  int a, b, sum; //정수 저장 변수 선언
  float avg; // 평균 연산 변수 선언

  printf("2개의 정수값을 입력하세요. \n");
  printf("첫 번째 정수의 값을 입력하세요. : "); // 1번째 정수 입력
  scanf("%d", &a); // 정수 출력
  printf("두 번째 정수의 값을 입력하세요. : "); // 2번째 정수 입력
  scanf("%d", &b); // 정수 출력
  
  sum = a + b; // 두 정수의 합계
  avg = sum/2.0f; //평균 연산 
  printf("두 정수의 합계는 %d이고 평균 값은 %.0f입니다. \n",sum ,avg); // 평균 값 출력
	printf("부호를 반환하여 출력하면 값은 %.0f입니다. \n", -avg);
  
  return 0;

}

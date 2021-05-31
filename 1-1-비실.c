#include <stdio.h> // printf() 와 scanf()를 사용 하기 위해 선언한다.
int main(void)
{
  int num1, num2, sum; //정수를 저장힐 변수를 선언한다.
  float avr;

  printf("2개의 정수값을 입력하시오. \n");
  printf("첫 번째 정수의 값을 입력하시오. : "); // 첫 번째 정수의  값을 입력한다.
  scanf("%d", &num1); 
  printf("두 번째 정수의 값을 입력하시오. : "); // 두 번째 정수의  값을 입력한다.
  scanf("%d", &num2); 
  
  sum = num1 + num2; // 정수의 합계를 구한다.
  avr = (float)sum/2; //정수의 평균을 구한다.
  printf("두 정수의 평균 값은 %.0f이다. \n",avr); // 두 정수의 평균 값을 출력한다.
	printf("부호를 바꾸어 출력하면 값은 %.0f이다. \n", -avr); // 반대 부호 정수를 출력한다.
  
  return 0;

}
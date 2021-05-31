//언어에서 제공하는 각종 연산자를 이용하여 
//입력된 액수를 500원, 100원, 50원, 10원짜리 동전으로 교환해주는 프로그램


#include <stdio.h>
#define IN "원의 반지름은 100입니다. \n"
#pragma warning (disable:4996)
void main()
{
  int in_mymoney, coin_500, coin_100, coin_50, coin_10;
  printf(" 동전을 교환할 금액은? ");
  scanf("%d", &in_mymoney);
  coin_500 = in_mymoney / 500;
  in_mymoney = in_mymoney % 500;
  coin_100 = in_mymoney / 100;
  in_mymoney = in_mymoney % 100;
  coin_50 = in_mymoney / 50;
  in_mymoney = in_mymoney % 50;
  coin_10 = in_mymoney / 10;
  in_mymoney = in_mymoney % 10;
  printf("\n 오백 원짜리 ==> %d 개 \n", coin_500);
  printf("\n 백 원짜리 ==> %d 개 \n", coin_100);
  printf("\n 오십 원짜리 ==> %d 개 \n", coin_50);
  printf("\n 십 원짜리 ==> %d 개 \n", coin_10);
  printf("\n 바꾸지 못한 잔돈 ==> %d원 \n", in_mymoney);
}
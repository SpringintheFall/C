//���� �����ϴ� ���� �����ڸ� �̿��Ͽ� 
//�Էµ� �׼��� 500��, 100��, 50��, 10��¥�� �������� ��ȯ���ִ� ���α׷�


#include <stdio.h>
#define IN "���� �������� 100�Դϴ�. \n"
#pragma warning (disable:4996)
void main()
{
  int in_mymoney, coin_500, coin_100, coin_50, coin_10;
  printf(" ������ ��ȯ�� �ݾ���? ");
  scanf("%d", &in_mymoney);
  coin_500 = in_mymoney / 500;
  in_mymoney = in_mymoney % 500;
  coin_100 = in_mymoney / 100;
  in_mymoney = in_mymoney % 100;
  coin_50 = in_mymoney / 50;
  in_mymoney = in_mymoney % 50;
  coin_10 = in_mymoney / 10;
  in_mymoney = in_mymoney % 10;
  printf("\n ���� ��¥�� ==> %d �� \n", coin_500);
  printf("\n �� ��¥�� ==> %d �� \n", coin_100);
  printf("\n ���� ��¥�� ==> %d �� \n", coin_50);
  printf("\n �� ��¥�� ==> %d �� \n", coin_10);
  printf("\n �ٲ��� ���� �ܵ� ==> %d�� \n", in_mymoney);
}
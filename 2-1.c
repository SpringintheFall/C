//4-1-�⺻ ���� ���Ժ�, main()�Լ�, ȣ��� �Լ�()�� ���캸�� ���� ������ 
//�� ���� �Է¹޾� ���� ���� ����ϴ� ���α׷�


/*���Ժ�*/
#include <stdio.h> // print()�� sacnf()�� ����ϱ� ���� header file ����
#pragma warning (disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int a, b, c; //������ �����ϴ� ��������
int product(int x, int y); //����� �Լ� ����

/*main() �Լ�*/
void main() {
  //ù ��° ���� �Է�
  printf("Enter another number betwwen 1 and 100 : ");
  scanf("%d", &a);
  //�� ��° ���� �Է�
  printf("Enter another number betwwen 1 and 100 : ");
  scanf("%d", &b);  
  //�Լ� ȣ�⿡ ���� �� ���� ���ϰ� ����� ���
  c = product(a, b);
  printf("%d * %d = %d \n", a, b, c);
}

/*�� ���� ���� ����Ͽ� �����ִ� ����� �Լ�*/
int product(int x, int y){
  return(x * y);
}
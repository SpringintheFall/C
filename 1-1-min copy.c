#include<stdio.h>

int main()
{   //��ٸ��� ���� * �Ʒ��� *���� /2
    int a, b, c; //a�� ���� ,b�� �Ʒ���, c�³���
    double d; //d�� ����

    printf("��ٸ����� ����:");
    scanf_s("%d", &b);
    printf("��ٸ����� �غ�:");
    scanf_s("%d", &a);
    printf("��ٸ����� ����:");
    scanf_s("%d", &c);
    printf("���� : (%d + %d) * %d / 2\n", b, a, c);
    d = (a + b) * c / 2.0;
    printf("���:%.0lf\n", d);
    return 0;
}
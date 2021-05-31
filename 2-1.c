//4-1-기본 구조 도입부, main()함수, 호출된 함수()를 살펴보기 위한 예제로 
//두 수를 입력받아 곱한 값을 출력하는 프로그램


/*도입부*/
#include <stdio.h> // print()와 sacnf()를 사용하기 위한 header file 포함
#pragma warning (disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메세지 무시

int a, b, c; //정수를 저장하는 변수선언
int product(int x, int y); //사용자 함수 원형

/*main() 함수*/
void main() {
  //첫 번째 수를 입력
  printf("Enter another number betwwen 1 and 100 : ");
  scanf("%d", &a);
  //두 번째 수를 입력
  printf("Enter another number betwwen 1 and 100 : ");
  scanf("%d", &b);  
  //함수 호출에 의해 두 수를 곱하고 결과를 출력
  c = product(a, b);
  printf("%d * %d = %d \n", a, b, c);
}

/*두 수의 곱을 계산하여 돌려주는 사용자 함수*/
int product(int x, int y){
  return(x * y);
}
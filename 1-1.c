// 사다리꼴의 윗변, 밑변, 높이 정수 값으로 입력 받은 후 
// 넓이를 실수값 소수점 이하 3자리 까지 출력 하는프로그램


#include <stdio.h> // printf(), scanf() 사용 선언

/*사다리꼴 공식*/
float Trapezoid(int x, int y, int z){
  float p;
  p=(x+y)*z/2.0f;
  return p;
}

int main(){
  int a, b, c; // 밑변, 윗변, 높이를 저장할 변수 선언 
  float avr;

  printf("밑변, 윗변, 높이를 순서대로 입력하세요. : "); 
  scanf("%d, %d, %d", &a, &b, &c); 
  avr = Trapezoid(a, b, c);
  
  printf("사다리꼴의 넓이는 %.03f이다. \n", avr); // 소수점 이하 3자리의 최종 값을 출력
  
  return 0;

}

/*도형 구하기 공식*/
obj(int a, int b, int c)
{
  printf("공식=%.f2\n",(a+b)*c/2);
}

int main()
{
  int a, b, c; // 밑변, 윗변, 높이를 저장할 변수 선언 한다.
  float p;

  printf("윗변, 밑변, 높이 순으로 입력하세요. : "); // 밑변, 윗변, 높이 순으로 입력한다.
  scanf("%d, %d, %d", &a,&b,&c); 
  obj(a, b, c);

  printf("사다리꼴의 면적은 %.03f입니다. \n", p); // 소수점 3자리 이하의 최종 값을 출력한다.
  return 0;

}

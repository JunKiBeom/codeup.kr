#include <stdio.h>

int main()
{
long long a, b;      //64비트 정수형 변수 a, b 선언
scanf("%lld %lld", &a, &b);    //두 개의 64비트 정수를 입력받음
printf("%lld", a+b);      //64비트 정수로 출력
}

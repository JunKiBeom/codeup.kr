﻿#include <stdio.h>
int main()
{
    int h, m, n;
    scanf("%d %d", &h,&m); // 시간 입력
    n=h*60+m; // 시간을 분으로 변환하여 변수 n에 저장

    n<30 && printf("%d %d",(24*60-(30-n))/60,(24*60-(30-n))%60); // n이 30분 미만일때
    n>29 && printf("%d %d",(n-30)/60,(n-30)%60); // 30분 이상일때
}

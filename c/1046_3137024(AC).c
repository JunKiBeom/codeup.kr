﻿#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int a, b,c;
	scanf("%d %d %d", &a, &b,&c);
	printf("%d\n%.1f", a+b+c,(a+b+c)/3.0);
}

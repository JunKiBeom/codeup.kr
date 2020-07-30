#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	if (a==0&&b==0)
		printf("1");
	else
		printf("0");
}

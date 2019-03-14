#include<stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n=0;
	scanf("%c", &n);
	n -= 55;
	for (int i = 1; i<16; i++)
		printf("%X*%X=%X\n", n, i, n*i);
	return 0;
}


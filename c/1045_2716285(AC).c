#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b;
	float c, d;
	scanf("%d %d", &a, &b);
	c = a, d = b;
	printf("%d\n%d\n%d\n%d\n%d\n%.2f", a + b, a - b, a*b, a / b, a%b, c / d);
}

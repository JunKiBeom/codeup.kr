#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c;
	scanf("%d", &a);
	if (a >= 90)
		printf("A\n");
	else if ((a <= 89) && (a >= 70))
		printf("B\n");
	else if ((a <= 69) && (a >= 40))
		printf("C\n");
	else if ((a <= 39) && (a >= 0))
		printf("D\n");
	return 0;
}

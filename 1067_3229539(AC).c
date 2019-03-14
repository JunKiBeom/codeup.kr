#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c;
	scanf("%d", &a);
	if (a < 0)
	{
		printf("minus\n");
		if (a % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	else
	{
		printf("plus\n");
		if (a % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}


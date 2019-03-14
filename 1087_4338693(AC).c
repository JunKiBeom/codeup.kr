#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	int sum = 0;
	scanf("%d", &a);
	for (int i = 1;; i++)
	{
		if (sum > a)
			break;
		sum += i;
	}
	printf("%d", sum);
}

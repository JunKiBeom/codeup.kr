#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1;; i++)
	{
		if (i > a)
			break;
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
}

#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int a, b = 0, i;
	scanf("%d", &a);

	for (i = 1; ; i++)
	{
		b += i;
		if (b >= a)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}

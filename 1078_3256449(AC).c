#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int num;
	int sum = 0;
	scanf("%d", &num);
	for (int i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return 0;
}


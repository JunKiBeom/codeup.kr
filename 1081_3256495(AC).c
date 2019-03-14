#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int i, j;
	int n, m;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}

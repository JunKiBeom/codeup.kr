#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, m, d, n;
	int cnt = 1;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	while (1)
	{
		if (cnt == n)
			break;
		a = a*m + d; cnt++;
	}
	printf("%d", a);
}

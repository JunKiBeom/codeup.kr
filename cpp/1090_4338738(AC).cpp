#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, r, n;
	int cnt = 1;
	scanf("%d %d %d", &a, &r, &n);
	while (1)
	{
		if (cnt == n)
			break;
		a *= r; cnt++;
	}
	printf("%d", a);
}

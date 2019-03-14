#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, d, n;
	int cnt = 1;
	scanf("%d %d %d", &a, &d, &n);
	for (int i = a;; i += d)
	{
		if (cnt == n)
			break;
		a += d; cnt++;
	}
	printf("%d", a);
}

#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		int a;
		scanf("%d", &a);
		printf("%d\n", a);
	}
	return 0;
}


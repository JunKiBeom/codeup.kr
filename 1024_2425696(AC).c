#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	char d[21];
	int i;
	scanf("%s", d);
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'\n", d[i]);
	}
	return 0;
}

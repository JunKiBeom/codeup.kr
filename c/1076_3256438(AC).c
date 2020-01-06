#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	char num;
	scanf("%c", &num);
	for (int i = 97; i <= num; i++)
	{
		printf("%c ", i);
	}
	return 0;
}


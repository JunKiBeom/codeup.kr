#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	while (1)
	{
		char a;
		scanf(" %c", &a);
		if (a == 'q')
		{
			printf("%c\n", a);
			break;
		}
		printf("%c\n", a);
	}
	return 0;
}


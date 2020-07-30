#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	while (1)
	{
		int alpha;
		scanf("%d", &alpha);
		if (alpha == 0)
		{
			printf("%d\n", alpha);
			break;
		}

		printf("%d\n", alpha);
	}
	return 0;
}


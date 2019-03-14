#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
	char alpha;
	scanf("%c", &alpha);
	switch (alpha)
	{
	case 'D':
		printf("slowly~");
		break;
	case 'C':
		printf("run!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'A':
		printf("best!!!");
		break;
	default:
		printf("what?");
		break;
	}
	return 0;
}


#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int w, h, b;
	double MB;
	scanf("%d %d %d", &w, &h, &b);
	MB = (double)(w*h*b) / 8 / 1024 / 1024;
	printf("%.2f MB", MB);
}

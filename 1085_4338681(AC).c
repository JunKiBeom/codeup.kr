#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int h, b, c, s;
	double MB;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	MB = (double)(h*b*c*s) / 8 / 1024 / 1024;
	printf("%.1f MB", MB);
}

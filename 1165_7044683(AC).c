#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while (a<90)
    {
        b++;
        a+=5;
    }
    printf("%d",b);
}

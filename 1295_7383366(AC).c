#include <stdio.h>
int main()
{
    char c[1001]={0};
    scanf("%s",&c);
    for (int i=0;i<1001;i++)
    {
        if ((c[i]>=65)&&(c[i]<=90))
            c[i]+=32;
        else if ((c[i]>=97)&&(c[i]<=122))
            c[i]-=32;
    }
    printf("%s",c);
}

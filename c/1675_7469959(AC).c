#include <stdio.h>
int main()
{
    char c[201]={0};
    scanf("%[^\n]s",c);
    for (int i=0;i<201;i++)
    {
        if((c[i]>=68&&c[i]<=90)||(c[i]>=100&&c[i]<=122))
            c[i]-=3;
        else if ((c[i]>=65&&c[i]<=67)||(c[i]>=97&&c[i]<=99))
            c[i]+=23;
    }
    printf("%s",c);
}

#include <stdio.h>
int main()
{
    float p[3]={0};
    int s[3]={0};
    float sum=0;
    for(int i=0;i<3;i++)
        scanf("%f %d",&p[i],&s[i]);
    for(int i=0;i<3;i++)
    {
        sum+=p[i]*s[i];
    }
    printf("%.1f",sum);
}

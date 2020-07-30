#include <stdio.h>
int main()
{
    int pan[19][19]={0};
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        pan[x-1][y-1]=1;
    }
    for(int i=0;i<19;i++) {
        for (int j = 0; j < 19; j++)
            printf("%d ", pan[i][j]);
        printf("\n");
    }
}

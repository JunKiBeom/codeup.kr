#include <stdio.h>

int n, d[110];


int f()
{
    int index=0, max = 0;
    if (n==1) return 1;
    for (int i=0;i<n;i++){
        if (d[i]>max) {
            index = i+1;
            max=d[i];
        }
    }
    return index;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}

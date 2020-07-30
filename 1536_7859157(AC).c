#include <stdio.h>

int n;

long long int d[110];


long long int f()
{
    long long int max = 2147483647;
    if (n==1) return d[1];
    for (int i=1;i<=n;i++){
        if (d[i]<max)
            max=d[i];
    }
    return max;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}

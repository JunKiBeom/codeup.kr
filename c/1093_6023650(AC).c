#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)
int main()
{
	srand(time(NULL));
	int n, i, t;
	int a[24] = { 0 };
	
	scanf("%d", &n); //개수 입력 받기
	for (i = 1; i <= n; i++) //개수 만큼 입력 받기
	{
		//t = rand() % 23 + 1;
		scanf("%d", &t);
		//printf("%d ", t);
		a[t] += 1; // 그 방에 먼저 들어있던 값에 1만큼 더해 다시 저장한다. a[t]+=1 과 같다.
	}
	//printf("\n");
	for (i = 1; i <= 23; i++)
	{
		printf("%d ", a[i]);  //1~23 번 배열에 저장되어있는 값 출력하기
	}
}

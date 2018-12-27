#include <stdio.h>
#include <stdlib.h>

typedef struct work{
	int day;
	int pay;
}WORK;

WORK work[16];
int total;

int max(int a, int b){
	if(a>=b)
		return a;
	return b;
}
void dfs(int day, int pay, int n)
{
	if (day == n + 1)
	{
		total = max(total, pay);
		return;
	}
	if (day + work[day].day <= n + 1)
		dfs(day + work[day].day, pay + work[day].pay, n);
	
	if (day + 1 <= n + 1) 
		dfs(day + 1, pay, n);
}

int main(void){
	int day;
	int i,j;
	int max;
	freopen("input.txt", "r", stdin);
	
	scanf("%d", &day);
	for(i=1; i <= day; i++)
		scanf("%d %d\n", &(work[i].day), &(work[i].pay));

	dfs(1, 0, day);

	printf("%d", total);
	return 0;
}

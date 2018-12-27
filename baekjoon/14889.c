#include <stdio.h>

int ans
int n;
int a[21][21];

void


int main(void){
	int i,j;
	freopen("input.txt", "r", stdin);
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}


	dfs(1
}

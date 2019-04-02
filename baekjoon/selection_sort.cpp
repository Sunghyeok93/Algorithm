#include <stdio.h>

int main(void){
	int ary[1001];
	int N;
	int tmp, max;
	int idx;
	scanf("%d", &N);

	for(int i = 0; i < N; i++)
		scanf("%d", &ary[i]);

	for(int i = 0; i < N; i++){
		max = 1001;
		for(int j = i; j < N; j++){
			if(ary[j] < max){
				max = ary[j];
				idx = j;
			}
		}
		tmp = ary[i];
		ary[i] = ary[idx];
		ary[idx] = tmp;
	}

	for(int i = 0; i<N; i++)
		printf("%d\n", ary[i]);

	return 0;
}

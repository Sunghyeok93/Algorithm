#include <iostream>

int main(void){
	int N;
	int tmp;
	int ary[1005];

	std::cin >> N;

	for(int i = 0; i < N; i++){
		scanf("%d",&ary[i]);
	}

	for(int i = N-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(ary[j] > ary[j+1]){
				tmp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = tmp;
			}	
		}
	}
	
	for(int i = 0; i < N; i++)
		printf("%d\n", ary[i]);

	return 0;
}

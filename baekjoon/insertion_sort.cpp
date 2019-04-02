#include <iostream>

#define P(x) printf("%d\n", x);

int main(void){
	int ary[1001];
	int N, key;
	int i,j;
	scanf("%d", &N);

	for(i = 0 ; i < N; i++){
		scanf("%d", &ary[i]);
	}

	for(i=1; i<N; i++){
   		key = ary[i];

	    for(j=i-1; j>=0 && ary[j]>key; j--){
			ary[j+1] = ary[j];
    	}

    	ary[j+1] = key;
  	}

	
	for(i = 0; i < N; i++){
		P(ary[i]);
	}
}

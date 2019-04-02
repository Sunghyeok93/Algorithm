#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
bool A[1001];

int main(void){
	int ary[101];
	int N;
	int cnt=0;
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++){
		scanf("%d", &ary[i]);
	}
	for(int i = 2; i < 1001; i++)
		A[i] = true;

	for(int i = 2; i <= sqrt(1001); i++){
		for(int j = i*i; j <= 1001; j += i){
			A[j] = false;
		}
	}

	for(int i = 1; i <= N; i++){
		if(A[ary[i]]==true)
			cnt++;
	}
	cout << cnt;

	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int N;
	int k,n;
	int ary[15][15] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},0};
	
	for(int i = 1; i <= 14; i++){

		for(int j = 1; j <= 14; j++){

			ary[i][j] = 0;

			for(int k=1; k <= j; k++){
				ary[i][j] += ary[i-1][k];
			}
		}

	}
	
	cin >> N;
	
	for(int i = 0; i< N; i++)
	{
		cin >> k;
		cin >> n;
		cout << ary[k][n]<<endl;
	}





	return 0;
}

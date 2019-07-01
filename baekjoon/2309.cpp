#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(void){
	int ary[9];
	int ans[7];
	int num;
	int sum=0;
	queue<int> q;
	vector<int> v;
	
	for(int i = 0; i < 9; i++){
		cin >> num;
		ary[i] = num;
		sum += num;
	}

	for(int i = 0; i < 8; i++){
		for(int j = i+1; j < 9; j++){
			if((sum - ary[i] - ary[j]) == 100){
				for(int k = 0; k < 9; k++){
					if(i!=k && j!=k){
						q.push(k);
					}
				}
			}	
		}
	}
	
	for(int i = 0 ; i < 7; i++){
		num = q.front();
		q.pop();
		v.push_back(ary[num]);
	}
	
	sort(v.begin(), v.end());

	for(int i = 0 ; i < 7; i++){
		cout << v.at(i) << endl;
	}

	return 0;
}

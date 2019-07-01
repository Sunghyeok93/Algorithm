#include <iostream>
#include <algorithm>

using namespace std;


int main(void){
	int n;
	int num;
	int tmp;
	cin >> n;

	for(int i = 0; i < n; i++){
		tmp = i;
		num = 0;

		while(tmp > 0){
			num += tmp % 10;
			tmp /= 10;
		}

		if((num + i) == n ){
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}

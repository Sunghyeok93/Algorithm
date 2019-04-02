#include <iostream>

using namespace std;

int main(void){

	int N;
	cin >> N;

	int a=0;
	int b=1;
	int tmp=0;
	if(N==0){
		cout << 0 << endl;
		return 0;
	}
		
	for(int i = 0 ; i < N-1; i++){
		tmp = b;
		b = a + b;
		a = tmp;
	}

	cout << b << endl;
	
	return 0;
}

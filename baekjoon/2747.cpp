#include <iostream>

using namespace std;

int fibo(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else{
		return fibo(n-2) + fibo(n-1); 
	}
}

int main(void){
	int N;

	cin >> N;

	cout << fibo(N) << endl;

}
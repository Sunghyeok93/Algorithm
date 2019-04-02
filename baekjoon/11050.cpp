#include <iostream>

using namespace std;

int Factorial (int n){
	if(n==1 || n==0)
		return 1;
	else
		return Factorial(n-1) * n;

}

int main(void){
	int N, K;
	
	cin >> N >> K;

	cout << Factorial(N) / (Factorial(K) * Factorial(N-K)) << endl;
	
}

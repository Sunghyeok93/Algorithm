#include <iostream>
using namespace std;

int test_case = 10;
int N, M;

int exp(int a, int b){
	if(b == 1)
		return a;
	else
		return (a * exp(a, b-1));
}

int main(void){
	int num;

	while(test_case--){
		cin >> num;
		cin >> N >> M ;

		cout << "#" << num << " " << exp(N, M) << endl; 
	}
}

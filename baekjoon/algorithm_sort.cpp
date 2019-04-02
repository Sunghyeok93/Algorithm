#include <iostream>
#include <algorithm>

int main(void){
	int ary[1000001];
	int N;
	
	std::cin >> N;

	for(int i = 0; i < N; i++)
		std::cin >> ary[i];

	std::sort(ary, ary+N);

	for(int i = 0; i < N; i++)
		std::cout << ary[i] << std::endl;
	
	return 0;
}

#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

int main(void){
	int N, num;
	stack<int> s;
	queue<int> q;
	vector<int> v;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		cin >> num;
		q.push(num);
	}
	
	num = 1;

	while( q.front() != num-1){
		s.push(num);
		num++;
		v.push_back(1);
	}

	q.pop();
	s.pop();
	v.push_back(0);

	for(int i = 1; i < N; i++){
		while(1){
			if(s.empty()){
				s.push(num);
			}
			if(q.front() > s.top()){
				s.push(num);
				v.push_back(1);
				num++;
			}
			else if(q.front() == s.top()){
				v.push_back(0);
				s.pop();
				q.pop();
				break;
			}
			else{
				printf("NO\n");
				return 0;
			}
		}
	}

	for(vector<int>::iterator i = v.begin(); i != v.end(); i++){
		if(*i == 1)
			printf("+\n");
		else
			printf("-\n");
	}
	return 0;
}

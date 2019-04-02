#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int main(void){
	queue<int> q;
	char str[20];
	int N, num;
	cin >> N;

	for(int i = 0 ; i < N; i++){
		scanf("%s", str);

		if(strcmp(str, "push")==0){
			cin >> num;
			q.push(num);
		}
		else if(strcmp(str, "front")==0){
			if(q.empty())
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if(strcmp(str, "back")==0){
			if(q.empty())
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
		else if(strcmp(str, "size")==0){
			cout << q.size() << endl;
		}
		else if (strcmp(str, "pop")==0){
			if(q.empty())
				cout << -1 << endl;
			else{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (strcmp(str, "empty")==0){
			if(q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else{
			cout << "wrong set"<< endl;
			return 0;
		}
		memset(str,0,sizeof(str));

	}
	
	return 0;
}

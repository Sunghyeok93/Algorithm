#include <iostream>
#include <stack>
#include <vector>
#include <string.h>

using namespace std;

int N;
char str[51];
int main(void){
	int cnt;
	scanf("%d", &N);

	for(int i = 0; i < N; i++){
		scanf("%s", str);
		stack<int> s;
		cnt = 0;
		for(int j = 0; j < strlen(str); j++){
			if(str[j] == '('){
				s.push(0);
			}
			else if(str[j] == ')'){
				if(s.empty()){
					cnt = 1;
					break;
				}
				else{
					s.pop();
				}
			}
		}
		if(!s.empty() || cnt == 1)
			printf("NO\n");
		else
			printf("YES\n");

	}

}

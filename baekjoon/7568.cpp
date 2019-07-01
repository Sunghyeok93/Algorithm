#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef struct info{
	int height;
	int weight;
	int num;
}Info;

int main(void){
	int n;
	Info info[50];

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> info[i].weight >> info[i].height;
		info[i].num = 1;
	}

	for(int i = 0 ; i < n; i++){
	
		for(int j = 0; j < n;j++){
			if((info[i].height < info[j].height) && (info[i].weight < info[j].weight) && i != j)
				info[i].num++;
		}
	}
	

	for(int i = 0; i < n; i++){
		cout << info[i].num << " ";
	}

	cout << endl;





	return 0;
}

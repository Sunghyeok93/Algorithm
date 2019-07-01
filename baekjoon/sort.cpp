#include <stdio.h>
int partition(int*, int, int);
void quick_sort(int* a, int left, int right){
	
	if( left < right){

		int q = partition(a, left, right);

		quick_sort(a, left, q-1);
		quick_sort(a, q+1, right);
	}
}

int partition(int* a, int left, int right){
	int pivot = a[left];
	int i = left;
	int j = right;
	int tmp;
	while(i < j){
		while(pivot < a[j]){
			j--;
		}

		while(i<j && pivot >= a[i]){
			i++;
		}
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
	a[left] = a[i];
	a[i] = pivot;
	return i;
}

void insertion_sort(int* a, int num){
	int j, key;
	for(int i = 1; i < num; i++){
		
		key = a[i];
		j = i-1;
		
		while(j >= 0 && key < a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}


}

void bubble_sort(int* a, int num){
	int tmp;
	for(int i = 0; i < num-1; i++){
		for(int j = 0; j < num-1; j++){
			if(a[j] > a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
}

void selection_sort(int* a, int num){
	int min;
	int idx, tmp;
	
	for(int i = 0; i < num-1; i++){
		min = i;	
		for(int j = i+1; j < num; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}

}

int main(void){
	int num;
	int a[10] = {3,4,7,1,6,11,2,9,10,8};

	for(int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");


	printf("1. insertion_sort\n");
	printf("2. bubble_sort\n");
	printf("3. selection_sort\n");
	printf("4. quick_sort\n");
	printf(" select sort : " );
	scanf("%d",&num);


	switch(num){
		case 1 : insertion_sort(a, 10); break;
		case 2 : bubble_sort(a, 10); break;
		case 3 : selection_sort(a,10); break;
		case 4 : quick_sort(a, 0, 9); break;
		default: break;
	}

	for(int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;


}}

#include <stdio.h>

void swap(int* n, int* m){
	int tmp;
	tmp = *n;
	*n = *m;
	*m = tmp;
}
void insertion_sort(int* arr, int num){
	int j, tmp;
	for(int i = 1; i < num; i++){
		j=i-1;
		tmp = arr[i];
		while(j>=0 && arr[j] > tmp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
}

void bubble_sort(int* arr, int num){
	
	for(int i = 0 ; i < num-1; i++){
		for(int j = 0; j < num-1; j++){
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);			
		}
	}
}

void selection_sort(int* arr, int num){
	int min;
	for(int i = 0; i < num-1; i++){
		min = i;
		for(int j = i+1; j < num;j++){
			if(arr[min] > arr[j])
				min = j;
		}
		swap(&arr[i], &arr[min]);
	}
}
int partition(int* arr, int low, int high){
	int pivot = arr[low];
	int i = low;
	int j = high;

	while(i < j){
		while(arr[j] > pivot)
			j--;
		while(arr[i] <= pivot && i<j)
			i++;
	
		swap(&arr[i], &arr[j]);
	}
	arr[low] = arr[i];
	arr[i] = pivot;
	return i;
}

void quick_sort(int* arr, int low, int high){

	if(low < high){
		int q = partition(arr, low, high);

		quick_sort(arr, low, q-1);
		quick_sort(arr, q+1, high);
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


}

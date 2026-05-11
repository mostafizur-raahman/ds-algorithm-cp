#include<bits/stdc++.h> 
using namespace std;
/*
    TC:  N * log (N) --> N for merge and log n for divide
    SC: O (N) in wrost case

*/
void merge(int arr[], int low,int mid, int high){
	vector<int> ds;
	int left = low;
	int right = mid + 1;

	while( left <= mid && right <= high){
		if ( arr[left] <= arr[right]){
			ds.push_back(arr[left]);
			left++;
		}else {
			ds.push_back(arr[right]);
			right++;
		}
	}

    // if left array is bigger then right one
	while(left <= mid){
		ds.push_back(arr[left]);
		left++;
	}


    // if right array is bigger then the left one 
	while(right <= high){
		ds.push_back(arr[right]);
		right++;
	}

    // just override the actual array to be sorted 
	for(int i = low; i <= high; i++){
		arr[i] = ds[i-low];
	}
}

void mergeSort(int arr[], int low, int high){

	if ( low == high) return;
	int mid = (low + high)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);

    // for merge 
	merge(arr, low, mid, high);
}
int main(void){
	int arr[] = {3,2,1,4,1,5,2,6,4};
	mergeSort(arr, 0, 8);
	for(auto a : arr){
		cout << a << " ";
	}
	cout << "\n";
}